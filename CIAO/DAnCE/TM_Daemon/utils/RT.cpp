#include "RT.h"

namespace CIAO
{
  namespace TM_Daemon
  {
    namespace utils
    {
      int set_priority ()
      {
        int priority =
          (ACE_Sched_Params::priority_min (ACE_SCHED_FIFO)
           + ACE_Sched_Params::priority_max (ACE_SCHED_FIFO)) / 2;
        priority = ACE_Sched_Params::next_priority (ACE_SCHED_FIFO,
                                                    priority);

        // Enable FIFO scheduling.

        if (ACE_OS::sched_params (ACE_Sched_Params (ACE_SCHED_FIFO,
                                                    priority,
                                                    ACE_SCOPE_PROCESS)) != 0)
          {
            if (ACE_OS::last_error () == EPERM)
                ACE_DEBUG ((LM_DEBUG,
                            "Utils (%P|%t): user is not superuser, "
                            "processes runs in time-shared class\n"));
            else
              ACE_ERROR ((LM_ERROR,
                          "Utils(%P|%t): set_priority failed\n"));
            return -1;
          }
        return 0;

      }
    }
  }
}
