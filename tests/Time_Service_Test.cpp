// $Id$

// ============================================================================
//
// = LIBRARY
//    tests
//
// = FILENAME
//    Time_Service_Test
//
// = DESCRIPTION
//    This example tests the Time Service server and clerk
//    components. The test forks and execs two processes to run both
//    the clerk and the time server. The clerk and the server
//    communicate for a short duration after which the main process
//    kills both the processes. No command line arguments are needed
//    to run the test.
//
// = AUTHOR
//    Prashant Jain
//
// ============================================================================

#include "test_config.h"
#include "ace/Process.h"

ACE_RCSID(tests, Time_Service_Test, "$Id$")

#if defined(__BORLANDC__) && __BORLANDC__ >= 0x0530
USELIB("..\ace\aced.lib");
//---------------------------------------------------------------------------
#endif /* defined(__BORLANDC__) && __BORLANDC__ >= 0x0530 */

#define APPLICATION \
ACE_TEXT ("..") ACE_DIRECTORY_SEPARATOR_STR \
ACE_TEXT ("netsvcs") ACE_DIRECTORY_SEPARATOR_STR \
ACE_TEXT ("servers") ACE_DIRECTORY_SEPARATOR_STR \
ACE_TEXT ("main") ACE_PLATFORM_EXE_SUFFIX \
ACE_TEXT (" -f ") ACE_PLATFORM

int
main (int, ASYS_TCHAR *[])
{
  ACE_START_TEST (ASYS_TEXT ("Time_Service_Test"));

  // Make sure that the backing store is not there. We need to make
  // sure because this test kills the Time Clerk and on some platforms
  // the Clerk is not allowed to do a graceful shutdown. By cleaning
  // the backing store here, we are sure that we get a fresh start and
  // no garbage data from a possible aborted run
  ACE_OS::unlink (ACE_DEFAULT_BACKING_STORE);

  LPCTSTR server_cl = APPLICATION ACE_TEXT ("server.conf");
  ACE_Process_Options server_options;
  server_options.command_line (server_cl);
  ACE_Process server;

  if (server.spawn (server_options) == -1)
    ACE_ERROR_RETURN ((LM_DEBUG, ASYS_TEXT ("%n; %p (%s).\n"),
                       ASYS_TEXT ("Server fork failed"), server_cl), -1);
  else
    ACE_DEBUG ((LM_DEBUG, ASYS_TEXT ("Server forked with pid = %d.\n"), server.getpid ()));

  ACE_OS::sleep (3);

  LPCTSTR clerk_cl = APPLICATION ACE_TEXT ("clerk.conf");
  ACE_Process_Options clerk_options;
  clerk_options.command_line (clerk_cl);
  ACE_Process clerk;

  if (clerk.spawn (clerk_options) == -1)
    ACE_ERROR_RETURN ((LM_DEBUG, ASYS_TEXT ("%n; %p: (%s).\n"),
                       ASYS_TEXT ("Clerk fork failed"), clerk_cl), -1);
  else
    ACE_DEBUG ((LM_DEBUG, ASYS_TEXT ("Clerk forked with pid = %d.\n"), clerk.getpid ()));

  ACE_DEBUG ((LM_DEBUG, ASYS_TEXT ("Sleeping...\n")));
  ACE_OS::sleep (10);

  if (clerk.terminate () == -1)
    ACE_ERROR_RETURN ((LM_ERROR, ASYS_TEXT ("Terminate failed for clerk.\n")), -1);

  if (server.terminate () == -1)
    ACE_ERROR_RETURN ((LM_ERROR, ASYS_TEXT ("Terminate failed for server.\n")), -1);

  // Since we kill the clerk process, on Win32 it may not do a
  // graceful shutdown and the backing store file is left behind.
  if (clerk.wait () != 0)
    ACE_OS::unlink (ACE_DEFAULT_BACKING_STORE);

  ACE_END_TEST;
  return 0;
}
