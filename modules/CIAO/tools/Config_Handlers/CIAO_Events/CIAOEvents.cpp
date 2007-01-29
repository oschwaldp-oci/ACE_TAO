/* $Id$
 * This code was generated by the XML Schema Compiler.
 *
 * Changes made to this code will most likely be overwritten
 * when the handlers are recompiled.
 * 
 * If you find errors or feel that there are bugfixes to be made,
 * please contact the current XSC maintainer:
 *             Will Otte <wotte@dre.vanderbilt.edu>
 */
 
#include "CIAOEvents.hpp"

namespace CIAO
{
  namespace Config_Handlers
  {
    // EventServiceType
    // 

    EventServiceType::Value EventServiceType::
    integral () const
    {
      return v_;
    }

    bool
    operator== (::CIAO::Config_Handlers::EventServiceType const& a, ::CIAO::Config_Handlers::EventServiceType const& b)
    {
      return a.v_ == b.v_;
    }

    bool
    operator!= (::CIAO::Config_Handlers::EventServiceType const& a, ::CIAO::Config_Handlers::EventServiceType const& b)
    {
      return a.v_ != b.v_;
    }

    EventServiceType::
    EventServiceType (EventServiceType::Value v)
    : v_ (v)
    {
    }

    // CIAOEventsDef
    // 

    CIAOEventsDef::
    CIAOEventsDef ()
    : 
    ::XSCRT::Type (), 
    regulator__ ()
    {
    }

    CIAOEventsDef::
    CIAOEventsDef (::CIAO::Config_Handlers::CIAOEventsDef const& s)
    :
    ::XSCRT::Type (),
    id_ (s.id_.get () ? new ::XMLSchema::ID< ACE_TCHAR > (*s.id_) : 0),
    regulator__ ()
    {
      {
        for (eventServiceConfiguration_const_iterator i (s.eventServiceConfiguration_.begin ());i != s.eventServiceConfiguration_.end ();++i) add_eventServiceConfiguration (*i);
      }

      if (id_.get ()) id_->container (this);
    }

    ::CIAO::Config_Handlers::CIAOEventsDef& CIAOEventsDef::
    operator= (::CIAO::Config_Handlers::CIAOEventsDef const& s)
    {
      eventServiceConfiguration_.clear ();
      {
        for (eventServiceConfiguration_const_iterator i (s.eventServiceConfiguration_.begin ());i != s.eventServiceConfiguration_.end ();++i) add_eventServiceConfiguration (*i);
      }

      if (s.id_.get ()) id (*(s.id_));
      else id_ = ::std::auto_ptr< ::XMLSchema::ID< ACE_TCHAR > > (0);

      return *this;
    }


    // CIAOEventsDef
    // 
    CIAOEventsDef::eventServiceConfiguration_iterator CIAOEventsDef::
    begin_eventServiceConfiguration ()
    {
      return eventServiceConfiguration_.begin ();
    }

    CIAOEventsDef::eventServiceConfiguration_iterator CIAOEventsDef::
    end_eventServiceConfiguration ()
    {
      return eventServiceConfiguration_.end ();
    }

    CIAOEventsDef::eventServiceConfiguration_const_iterator CIAOEventsDef::
    begin_eventServiceConfiguration () const
    {
      return eventServiceConfiguration_.begin ();
    }

    CIAOEventsDef::eventServiceConfiguration_const_iterator CIAOEventsDef::
    end_eventServiceConfiguration () const
    {
      return eventServiceConfiguration_.end ();
    }

    void CIAOEventsDef::
    add_eventServiceConfiguration (::CIAO::Config_Handlers::EventServiceDescription const& e)
    {
      eventServiceConfiguration_.push_back (e);
    }

    size_t CIAOEventsDef::
    count_eventServiceConfiguration(void) const
    {
      return eventServiceConfiguration_.size ();
    }

    // CIAOEventsDef
    // 
    bool CIAOEventsDef::
    id_p () const
    {
      return id_.get () != 0;
    }

    ::XMLSchema::ID< ACE_TCHAR > const& CIAOEventsDef::
    id () const
    {
      return *id_;
    }

    ::XMLSchema::ID< ACE_TCHAR >& CIAOEventsDef::
    id ()
    {
      return *id_;
    }

    void CIAOEventsDef::
    id (::XMLSchema::ID< ACE_TCHAR > const& e)
    {
      if (id_.get ())
      {
        *id_ = e;
      }

      else
      {
        id_ = ::std::auto_ptr< ::XMLSchema::ID< ACE_TCHAR > > (new ::XMLSchema::ID< ACE_TCHAR > (e));
        id_->container (this);
      }
    }


    // EventServiceDescription
    // 

    EventServiceDescription::
    EventServiceDescription (::XMLSchema::string< ACE_TCHAR > const& name__,
                             ::XMLSchema::string< ACE_TCHAR > const& node__,
                             ::CIAO::Config_Handlers::EventServiceType const& type__,
                             ::XMLSchema::string< ACE_TCHAR > const& svc_cfg_file__)
    : 
    ::XSCRT::Type (), 
    name_ (new ::XMLSchema::string< ACE_TCHAR > (name__)),
    node_ (new ::XMLSchema::string< ACE_TCHAR > (node__)),
    type_ (new ::CIAO::Config_Handlers::EventServiceType (type__)),
    svc_cfg_file_ (new ::XMLSchema::string< ACE_TCHAR > (svc_cfg_file__)),
    regulator__ ()
    {
      name_->container (this);
      node_->container (this);
      type_->container (this);
      svc_cfg_file_->container (this);
    }

    EventServiceDescription::
    EventServiceDescription (::CIAO::Config_Handlers::EventServiceDescription const& s)
    :
    ::XSCRT::Type (),
    name_ (new ::XMLSchema::string< ACE_TCHAR > (*s.name_)),
    node_ (new ::XMLSchema::string< ACE_TCHAR > (*s.node_)),
    type_ (new ::CIAO::Config_Handlers::EventServiceType (*s.type_)),
    svc_cfg_file_ (new ::XMLSchema::string< ACE_TCHAR > (*s.svc_cfg_file_)),
    id_ (s.id_.get () ? new ::XMLSchema::ID< ACE_TCHAR > (*s.id_) : 0),
    regulator__ ()
    {
      name_->container (this);
      node_->container (this);
      type_->container (this);
      svc_cfg_file_->container (this);
      {
        for (filter_const_iterator i (s.filter_.begin ());i != s.filter_.end ();++i) add_filter (*i);
      }

      {
        for (addr_serv_const_iterator i (s.addr_serv_.begin ());i != s.addr_serv_.end ();++i) add_addr_serv (*i);
      }

      {
        for (udp_sender_const_iterator i (s.udp_sender_.begin ());i != s.udp_sender_.end ();++i) add_udp_sender (*i);
      }

      {
        for (udp_receiver_const_iterator i (s.udp_receiver_.begin ());i != s.udp_receiver_.end ();++i) add_udp_receiver (*i);
      }

      if (id_.get ()) id_->container (this);
    }

    ::CIAO::Config_Handlers::EventServiceDescription& EventServiceDescription::
    operator= (::CIAO::Config_Handlers::EventServiceDescription const& s)
    {
      name (s.name ());

      node (s.node ());

      type (s.type ());

      svc_cfg_file (s.svc_cfg_file ());

      filter_.clear ();
      {
        for (filter_const_iterator i (s.filter_.begin ());i != s.filter_.end ();++i) add_filter (*i);
      }

      addr_serv_.clear ();
      {
        for (addr_serv_const_iterator i (s.addr_serv_.begin ());i != s.addr_serv_.end ();++i) add_addr_serv (*i);
      }

      udp_sender_.clear ();
      {
        for (udp_sender_const_iterator i (s.udp_sender_.begin ());i != s.udp_sender_.end ();++i) add_udp_sender (*i);
      }

      udp_receiver_.clear ();
      {
        for (udp_receiver_const_iterator i (s.udp_receiver_.begin ());i != s.udp_receiver_.end ();++i) add_udp_receiver (*i);
      }

      if (s.id_.get ()) id (*(s.id_));
      else id_ = ::std::auto_ptr< ::XMLSchema::ID< ACE_TCHAR > > (0);

      return *this;
    }


    // EventServiceDescription
    // 
    ::XMLSchema::string< ACE_TCHAR > const& EventServiceDescription::
    name () const
    {
      return *name_;
    }

    void EventServiceDescription::
    name (::XMLSchema::string< ACE_TCHAR > const& e)
    {
      *name_ = e;
    }

    // EventServiceDescription
    // 
    ::XMLSchema::string< ACE_TCHAR > const& EventServiceDescription::
    node () const
    {
      return *node_;
    }

    void EventServiceDescription::
    node (::XMLSchema::string< ACE_TCHAR > const& e)
    {
      *node_ = e;
    }

    // EventServiceDescription
    // 
    ::CIAO::Config_Handlers::EventServiceType const& EventServiceDescription::
    type () const
    {
      return *type_;
    }

    void EventServiceDescription::
    type (::CIAO::Config_Handlers::EventServiceType const& e)
    {
      *type_ = e;
    }

    // EventServiceDescription
    // 
    ::XMLSchema::string< ACE_TCHAR > const& EventServiceDescription::
    svc_cfg_file () const
    {
      return *svc_cfg_file_;
    }

    void EventServiceDescription::
    svc_cfg_file (::XMLSchema::string< ACE_TCHAR > const& e)
    {
      *svc_cfg_file_ = e;
    }

    // EventServiceDescription
    // 
    EventServiceDescription::filter_iterator EventServiceDescription::
    begin_filter ()
    {
      return filter_.begin ();
    }

    EventServiceDescription::filter_iterator EventServiceDescription::
    end_filter ()
    {
      return filter_.end ();
    }

    EventServiceDescription::filter_const_iterator EventServiceDescription::
    begin_filter () const
    {
      return filter_.begin ();
    }

    EventServiceDescription::filter_const_iterator EventServiceDescription::
    end_filter () const
    {
      return filter_.end ();
    }

    void EventServiceDescription::
    add_filter (::CIAO::Config_Handlers::Filter const& e)
    {
      filter_.push_back (e);
    }

    size_t EventServiceDescription::
    count_filter(void) const
    {
      return filter_.size ();
    }

    // EventServiceDescription
    // 
    EventServiceDescription::addr_serv_iterator EventServiceDescription::
    begin_addr_serv ()
    {
      return addr_serv_.begin ();
    }

    EventServiceDescription::addr_serv_iterator EventServiceDescription::
    end_addr_serv ()
    {
      return addr_serv_.end ();
    }

    EventServiceDescription::addr_serv_const_iterator EventServiceDescription::
    begin_addr_serv () const
    {
      return addr_serv_.begin ();
    }

    EventServiceDescription::addr_serv_const_iterator EventServiceDescription::
    end_addr_serv () const
    {
      return addr_serv_.end ();
    }

    void EventServiceDescription::
    add_addr_serv (::CIAO::Config_Handlers::AddressServerDescription const& e)
    {
      addr_serv_.push_back (e);
    }

    size_t EventServiceDescription::
    count_addr_serv(void) const
    {
      return addr_serv_.size ();
    }

    // EventServiceDescription
    // 
    EventServiceDescription::udp_sender_iterator EventServiceDescription::
    begin_udp_sender ()
    {
      return udp_sender_.begin ();
    }

    EventServiceDescription::udp_sender_iterator EventServiceDescription::
    end_udp_sender ()
    {
      return udp_sender_.end ();
    }

    EventServiceDescription::udp_sender_const_iterator EventServiceDescription::
    begin_udp_sender () const
    {
      return udp_sender_.begin ();
    }

    EventServiceDescription::udp_sender_const_iterator EventServiceDescription::
    end_udp_sender () const
    {
      return udp_sender_.end ();
    }

    void EventServiceDescription::
    add_udp_sender (::CIAO::Config_Handlers::UDPSenderDescription const& e)
    {
      udp_sender_.push_back (e);
    }

    size_t EventServiceDescription::
    count_udp_sender(void) const
    {
      return udp_sender_.size ();
    }

    // EventServiceDescription
    // 
    EventServiceDescription::udp_receiver_iterator EventServiceDescription::
    begin_udp_receiver ()
    {
      return udp_receiver_.begin ();
    }

    EventServiceDescription::udp_receiver_iterator EventServiceDescription::
    end_udp_receiver ()
    {
      return udp_receiver_.end ();
    }

    EventServiceDescription::udp_receiver_const_iterator EventServiceDescription::
    begin_udp_receiver () const
    {
      return udp_receiver_.begin ();
    }

    EventServiceDescription::udp_receiver_const_iterator EventServiceDescription::
    end_udp_receiver () const
    {
      return udp_receiver_.end ();
    }

    void EventServiceDescription::
    add_udp_receiver (::CIAO::Config_Handlers::UDPReceiverDescription const& e)
    {
      udp_receiver_.push_back (e);
    }

    size_t EventServiceDescription::
    count_udp_receiver(void) const
    {
      return udp_receiver_.size ();
    }

    // EventServiceDescription
    // 
    bool EventServiceDescription::
    id_p () const
    {
      return id_.get () != 0;
    }

    ::XMLSchema::ID< ACE_TCHAR > const& EventServiceDescription::
    id () const
    {
      return *id_;
    }

    ::XMLSchema::ID< ACE_TCHAR >& EventServiceDescription::
    id ()
    {
      return *id_;
    }

    void EventServiceDescription::
    id (::XMLSchema::ID< ACE_TCHAR > const& e)
    {
      if (id_.get ())
      {
        *id_ = e;
      }

      else
      {
        id_ = ::std::auto_ptr< ::XMLSchema::ID< ACE_TCHAR > > (new ::XMLSchema::ID< ACE_TCHAR > (e));
        id_->container (this);
      }
    }


    // FilterType
    // 

    FilterType::Value FilterType::
    integral () const
    {
      return v_;
    }

    bool
    operator== (::CIAO::Config_Handlers::FilterType const& a, ::CIAO::Config_Handlers::FilterType const& b)
    {
      return a.v_ == b.v_;
    }

    bool
    operator!= (::CIAO::Config_Handlers::FilterType const& a, ::CIAO::Config_Handlers::FilterType const& b)
    {
      return a.v_ != b.v_;
    }

    FilterType::
    FilterType (FilterType::Value v)
    : v_ (v)
    {
    }

    // Filter
    // 

    Filter::
    Filter (::XMLSchema::string< ACE_TCHAR > const& name__,
            ::CIAO::Config_Handlers::FilterType const& type__)
    : 
    ::XSCRT::Type (), 
    name_ (new ::XMLSchema::string< ACE_TCHAR > (name__)),
    type_ (new ::CIAO::Config_Handlers::FilterType (type__)),
    regulator__ ()
    {
      name_->container (this);
      type_->container (this);
    }

    Filter::
    Filter (::CIAO::Config_Handlers::Filter const& s)
    :
    ::XSCRT::Type (),
    name_ (new ::XMLSchema::string< ACE_TCHAR > (*s.name_)),
    type_ (new ::CIAO::Config_Handlers::FilterType (*s.type_)),
    id_ (s.id_.get () ? new ::XMLSchema::ID< ACE_TCHAR > (*s.id_) : 0),
    regulator__ ()
    {
      name_->container (this);
      type_->container (this);
      {
        for (source_const_iterator i (s.source_.begin ());i != s.source_.end ();++i) add_source (*i);
      }

      if (id_.get ()) id_->container (this);
    }

    ::CIAO::Config_Handlers::Filter& Filter::
    operator= (::CIAO::Config_Handlers::Filter const& s)
    {
      name (s.name ());

      type (s.type ());

      source_.clear ();
      {
        for (source_const_iterator i (s.source_.begin ());i != s.source_.end ();++i) add_source (*i);
      }

      if (s.id_.get ()) id (*(s.id_));
      else id_ = ::std::auto_ptr< ::XMLSchema::ID< ACE_TCHAR > > (0);

      return *this;
    }


    // Filter
    // 
    ::XMLSchema::string< ACE_TCHAR > const& Filter::
    name () const
    {
      return *name_;
    }

    void Filter::
    name (::XMLSchema::string< ACE_TCHAR > const& e)
    {
      *name_ = e;
    }

    // Filter
    // 
    ::CIAO::Config_Handlers::FilterType const& Filter::
    type () const
    {
      return *type_;
    }

    void Filter::
    type (::CIAO::Config_Handlers::FilterType const& e)
    {
      *type_ = e;
    }

    // Filter
    // 
    Filter::source_iterator Filter::
    begin_source ()
    {
      return source_.begin ();
    }

    Filter::source_iterator Filter::
    end_source ()
    {
      return source_.end ();
    }

    Filter::source_const_iterator Filter::
    begin_source () const
    {
      return source_.begin ();
    }

    Filter::source_const_iterator Filter::
    end_source () const
    {
      return source_.end ();
    }

    void Filter::
    add_source (::XMLSchema::string< ACE_TCHAR > const& e)
    {
      source_.push_back (e);
    }

    size_t Filter::
    count_source(void) const
    {
      return source_.size ();
    }

    // Filter
    // 
    bool Filter::
    id_p () const
    {
      return id_.get () != 0;
    }

    ::XMLSchema::ID< ACE_TCHAR > const& Filter::
    id () const
    {
      return *id_;
    }

    ::XMLSchema::ID< ACE_TCHAR >& Filter::
    id ()
    {
      return *id_;
    }

    void Filter::
    id (::XMLSchema::ID< ACE_TCHAR > const& e)
    {
      if (id_.get ())
      {
        *id_ = e;
      }

      else
      {
        id_ = ::std::auto_ptr< ::XMLSchema::ID< ACE_TCHAR > > (new ::XMLSchema::ID< ACE_TCHAR > (e));
        id_->container (this);
      }
    }


    // AddressServerDescription
    // 

    AddressServerDescription::
    AddressServerDescription (::XMLSchema::string< ACE_TCHAR > const& name__,
                              ::XMLSchema::unsignedShort const& port__,
                              ::XMLSchema::string< ACE_TCHAR > const& address__)
    : 
    ::XSCRT::Type (), 
    name_ (new ::XMLSchema::string< ACE_TCHAR > (name__)),
    port_ (new ::XMLSchema::unsignedShort (port__)),
    address_ (new ::XMLSchema::string< ACE_TCHAR > (address__)),
    regulator__ ()
    {
      name_->container (this);
      port_->container (this);
      address_->container (this);
    }

    AddressServerDescription::
    AddressServerDescription (::CIAO::Config_Handlers::AddressServerDescription const& s)
    :
    ::XSCRT::Type (),
    name_ (new ::XMLSchema::string< ACE_TCHAR > (*s.name_)),
    port_ (new ::XMLSchema::unsignedShort (*s.port_)),
    address_ (new ::XMLSchema::string< ACE_TCHAR > (*s.address_)),
    regulator__ ()
    {
      name_->container (this);
      port_->container (this);
      address_->container (this);
    }

    ::CIAO::Config_Handlers::AddressServerDescription& AddressServerDescription::
    operator= (::CIAO::Config_Handlers::AddressServerDescription const& s)
    {
      name (s.name ());

      port (s.port ());

      address (s.address ());

      return *this;
    }


    // AddressServerDescription
    // 
    ::XMLSchema::string< ACE_TCHAR > const& AddressServerDescription::
    name () const
    {
      return *name_;
    }

    void AddressServerDescription::
    name (::XMLSchema::string< ACE_TCHAR > const& e)
    {
      *name_ = e;
    }

    // AddressServerDescription
    // 
    ::XMLSchema::unsignedShort const& AddressServerDescription::
    port () const
    {
      return *port_;
    }

    void AddressServerDescription::
    port (::XMLSchema::unsignedShort const& e)
    {
      *port_ = e;
    }

    // AddressServerDescription
    // 
    ::XMLSchema::string< ACE_TCHAR > const& AddressServerDescription::
    address () const
    {
      return *address_;
    }

    void AddressServerDescription::
    address (::XMLSchema::string< ACE_TCHAR > const& e)
    {
      *address_ = e;
    }


    // UDPSenderDescription
    // 

    UDPSenderDescription::
    UDPSenderDescription (::XMLSchema::string< ACE_TCHAR > const& name__,
                          ::XMLSchema::string< ACE_TCHAR > const& addr_serv_id__)
    : 
    ::XSCRT::Type (), 
    name_ (new ::XMLSchema::string< ACE_TCHAR > (name__)),
    addr_serv_id_ (new ::XMLSchema::string< ACE_TCHAR > (addr_serv_id__)),
    regulator__ ()
    {
      name_->container (this);
      addr_serv_id_->container (this);
    }

    UDPSenderDescription::
    UDPSenderDescription (::CIAO::Config_Handlers::UDPSenderDescription const& s)
    :
    ::XSCRT::Type (),
    name_ (new ::XMLSchema::string< ACE_TCHAR > (*s.name_)),
    addr_serv_id_ (new ::XMLSchema::string< ACE_TCHAR > (*s.addr_serv_id_)),
    regulator__ ()
    {
      name_->container (this);
      addr_serv_id_->container (this);
    }

    ::CIAO::Config_Handlers::UDPSenderDescription& UDPSenderDescription::
    operator= (::CIAO::Config_Handlers::UDPSenderDescription const& s)
    {
      name (s.name ());

      addr_serv_id (s.addr_serv_id ());

      return *this;
    }


    // UDPSenderDescription
    // 
    ::XMLSchema::string< ACE_TCHAR > const& UDPSenderDescription::
    name () const
    {
      return *name_;
    }

    void UDPSenderDescription::
    name (::XMLSchema::string< ACE_TCHAR > const& e)
    {
      *name_ = e;
    }

    // UDPSenderDescription
    // 
    ::XMLSchema::string< ACE_TCHAR > const& UDPSenderDescription::
    addr_serv_id () const
    {
      return *addr_serv_id_;
    }

    void UDPSenderDescription::
    addr_serv_id (::XMLSchema::string< ACE_TCHAR > const& e)
    {
      *addr_serv_id_ = e;
    }


    // UDPReceiverDescription
    // 

    UDPReceiverDescription::
    UDPReceiverDescription (::XMLSchema::string< ACE_TCHAR > const& name__,
                            ::XMLSchema::boolean const& is_multicast__,
                            ::XMLSchema::unsignedShort const& listen_port__)
    : 
    ::XSCRT::Type (), 
    name_ (new ::XMLSchema::string< ACE_TCHAR > (name__)),
    is_multicast_ (new ::XMLSchema::boolean (is_multicast__)),
    listen_port_ (new ::XMLSchema::unsignedShort (listen_port__)),
    regulator__ ()
    {
      name_->container (this);
      is_multicast_->container (this);
      listen_port_->container (this);
    }

    UDPReceiverDescription::
    UDPReceiverDescription (::CIAO::Config_Handlers::UDPReceiverDescription const& s)
    :
    ::XSCRT::Type (),
    name_ (new ::XMLSchema::string< ACE_TCHAR > (*s.name_)),
    addr_serv_id_ (s.addr_serv_id_.get () ? new ::XMLSchema::string< ACE_TCHAR > (*s.addr_serv_id_) : 0),
    is_multicast_ (new ::XMLSchema::boolean (*s.is_multicast_)),
    listen_port_ (new ::XMLSchema::unsignedShort (*s.listen_port_)),
    regulator__ ()
    {
      name_->container (this);
      if (addr_serv_id_.get ()) addr_serv_id_->container (this);
      is_multicast_->container (this);
      listen_port_->container (this);
    }

    ::CIAO::Config_Handlers::UDPReceiverDescription& UDPReceiverDescription::
    operator= (::CIAO::Config_Handlers::UDPReceiverDescription const& s)
    {
      name (s.name ());

      if (s.addr_serv_id_.get ()) addr_serv_id (*(s.addr_serv_id_));
      else addr_serv_id_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (0);

      is_multicast (s.is_multicast ());

      listen_port (s.listen_port ());

      return *this;
    }


    // UDPReceiverDescription
    // 
    ::XMLSchema::string< ACE_TCHAR > const& UDPReceiverDescription::
    name () const
    {
      return *name_;
    }

    void UDPReceiverDescription::
    name (::XMLSchema::string< ACE_TCHAR > const& e)
    {
      *name_ = e;
    }

    // UDPReceiverDescription
    // 
    bool UDPReceiverDescription::
    addr_serv_id_p () const
    {
      return addr_serv_id_.get () != 0;
    }

    ::XMLSchema::string< ACE_TCHAR > const& UDPReceiverDescription::
    addr_serv_id () const
    {
      return *addr_serv_id_;
    }

    void UDPReceiverDescription::
    addr_serv_id (::XMLSchema::string< ACE_TCHAR > const& e)
    {
      if (addr_serv_id_.get ())
      {
        *addr_serv_id_ = e;
      }

      else
      {
        addr_serv_id_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
        addr_serv_id_->container (this);
      }
    }

    // UDPReceiverDescription
    // 
    ::XMLSchema::boolean const& UDPReceiverDescription::
    is_multicast () const
    {
      return *is_multicast_;
    }

    void UDPReceiverDescription::
    is_multicast (::XMLSchema::boolean const& e)
    {
      *is_multicast_ = e;
    }

    // UDPReceiverDescription
    // 
    ::XMLSchema::unsignedShort const& UDPReceiverDescription::
    listen_port () const
    {
      return *listen_port_;
    }

    void UDPReceiverDescription::
    listen_port (::XMLSchema::unsignedShort const& e)
    {
      *listen_port_ = e;
    }
  }
}

namespace CIAO
{
  namespace Config_Handlers
  {
    // EventServiceType
    //

    EventServiceType::
    EventServiceType (::XSCRT::XML::Element< ACE_TCHAR > const& e)
    : ::XSCRT::Type (e)
    {
      ::std::basic_string< ACE_TCHAR > v (e.value ());

      if (v == "EC") v_ = EC_l;
      else if (v == "RTEC") v_ = RTEC_l;
      else if (v == "NOTIFY") v_ = NOTIFY_l;
      else if (v == "RTNOTIFY") v_ = RTNOTIFY_l;
      else 
      {
      }
    }

    EventServiceType::
    EventServiceType (::XSCRT::XML::Attribute< ACE_TCHAR > const& a)
    : ::XSCRT::Type (a)
    {
      ::std::basic_string< ACE_TCHAR > v (a.value ());

      if (v == "EC") v_ = EC_l;
      else if (v == "RTEC") v_ = RTEC_l;
      else if (v == "NOTIFY") v_ = NOTIFY_l;
      else if (v == "RTNOTIFY") v_ = RTNOTIFY_l;
      else 
      {
      }
    }

    EventServiceType const EventServiceType::EC (EventServiceType::EC_l);
    EventServiceType const EventServiceType::RTEC (EventServiceType::RTEC_l);
    EventServiceType const EventServiceType::NOTIFY (EventServiceType::NOTIFY_l);
    EventServiceType const EventServiceType::RTNOTIFY (EventServiceType::RTNOTIFY_l);

    // CIAOEventsDef
    //

    CIAOEventsDef::
    CIAOEventsDef (::XSCRT::XML::Element< ACE_TCHAR > const& e)
    :Base__ (e), regulator__ ()
    {

      ::XSCRT::Parser< ACE_TCHAR > p (e);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (p.next_element ());
        ::std::basic_string< ACE_TCHAR > n (::XSCRT::XML::uq_name (e.name ()));

        if (n == "eventServiceConfiguration")
        {
          ::CIAO::Config_Handlers::EventServiceDescription t (e);
          add_eventServiceConfiguration (t);
        }

        else 
        {
        }
      }

      while (p.more_attributes ())
      {
        ::XSCRT::XML::Attribute< ACE_TCHAR > a (p.next_attribute ());
        ::std::basic_string< ACE_TCHAR > n (::XSCRT::XML::uq_name (a.name ()));
        if (n == "id")
        {
          ::XMLSchema::ID< ACE_TCHAR > t (a);
          id (t);
        }

        else 
        {
        }
      }
    }

    // EventServiceDescription
    //

    EventServiceDescription::
    EventServiceDescription (::XSCRT::XML::Element< ACE_TCHAR > const& e)
    :Base__ (e), regulator__ ()
    {

      ::XSCRT::Parser< ACE_TCHAR > p (e);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (p.next_element ());
        ::std::basic_string< ACE_TCHAR > n (::XSCRT::XML::uq_name (e.name ()));

        if (n == "name")
        {
          name_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
          name_->container (this);
        }

        else if (n == "node")
        {
          node_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
          node_->container (this);
        }

        else if (n == "type")
        {
          type_ = ::std::auto_ptr< ::CIAO::Config_Handlers::EventServiceType > (new ::CIAO::Config_Handlers::EventServiceType (e));
          type_->container (this);
        }

        else if (n == "svc_cfg_file")
        {
          svc_cfg_file_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
          svc_cfg_file_->container (this);
        }

        else if (n == "filter")
        {
          ::CIAO::Config_Handlers::Filter t (e);
          add_filter (t);
        }

        else if (n == "addr_serv")
        {
          ::CIAO::Config_Handlers::AddressServerDescription t (e);
          add_addr_serv (t);
        }

        else if (n == "udp_sender")
        {
          ::CIAO::Config_Handlers::UDPSenderDescription t (e);
          add_udp_sender (t);
        }

        else if (n == "udp_receiver")
        {
          ::CIAO::Config_Handlers::UDPReceiverDescription t (e);
          add_udp_receiver (t);
        }

        else 
        {
        }
      }

      while (p.more_attributes ())
      {
        ::XSCRT::XML::Attribute< ACE_TCHAR > a (p.next_attribute ());
        ::std::basic_string< ACE_TCHAR > n (::XSCRT::XML::uq_name (a.name ()));
        if (n == "id")
        {
          ::XMLSchema::ID< ACE_TCHAR > t (a);
          id (t);
        }

        else 
        {
        }
      }
    }

    // FilterType
    //

    FilterType::
    FilterType (::XSCRT::XML::Element< ACE_TCHAR > const& e)
    : ::XSCRT::Type (e)
    {
      ::std::basic_string< ACE_TCHAR > v (e.value ());

      if (v == "CONJUNCTION") v_ = CONJUNCTION_l;
      else if (v == "DISJUNCTION") v_ = DISJUNCTION_l;
      else if (v == "LOGICAL_AND") v_ = LOGICAL_AND_l;
      else if (v == "NEGATE") v_ = NEGATE_l;
      else 
      {
      }
    }

    FilterType::
    FilterType (::XSCRT::XML::Attribute< ACE_TCHAR > const& a)
    : ::XSCRT::Type (a)
    {
      ::std::basic_string< ACE_TCHAR > v (a.value ());

      if (v == "CONJUNCTION") v_ = CONJUNCTION_l;
      else if (v == "DISJUNCTION") v_ = DISJUNCTION_l;
      else if (v == "LOGICAL_AND") v_ = LOGICAL_AND_l;
      else if (v == "NEGATE") v_ = NEGATE_l;
      else 
      {
      }
    }

    FilterType const FilterType::CONJUNCTION (FilterType::CONJUNCTION_l);
    FilterType const FilterType::DISJUNCTION (FilterType::DISJUNCTION_l);
    FilterType const FilterType::LOGICAL_AND (FilterType::LOGICAL_AND_l);
    FilterType const FilterType::NEGATE (FilterType::NEGATE_l);

    // Filter
    //

    Filter::
    Filter (::XSCRT::XML::Element< ACE_TCHAR > const& e)
    :Base__ (e), regulator__ ()
    {

      ::XSCRT::Parser< ACE_TCHAR > p (e);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (p.next_element ());
        ::std::basic_string< ACE_TCHAR > n (::XSCRT::XML::uq_name (e.name ()));

        if (n == "name")
        {
          name_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
          name_->container (this);
        }

        else if (n == "type")
        {
          type_ = ::std::auto_ptr< ::CIAO::Config_Handlers::FilterType > (new ::CIAO::Config_Handlers::FilterType (e));
          type_->container (this);
        }

        else if (n == "source")
        {
          ::XMLSchema::string< ACE_TCHAR > t (e);
          add_source (t);
        }

        else 
        {
        }
      }

      while (p.more_attributes ())
      {
        ::XSCRT::XML::Attribute< ACE_TCHAR > a (p.next_attribute ());
        ::std::basic_string< ACE_TCHAR > n (::XSCRT::XML::uq_name (a.name ()));
        if (n == "id")
        {
          ::XMLSchema::ID< ACE_TCHAR > t (a);
          id (t);
        }

        else 
        {
        }
      }
    }

    // AddressServerDescription
    //

    AddressServerDescription::
    AddressServerDescription (::XSCRT::XML::Element< ACE_TCHAR > const& e)
    :Base__ (e), regulator__ ()
    {

      ::XSCRT::Parser< ACE_TCHAR > p (e);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (p.next_element ());
        ::std::basic_string< ACE_TCHAR > n (::XSCRT::XML::uq_name (e.name ()));

        if (n == "name")
        {
          name_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
          name_->container (this);
        }

        else if (n == "port")
        {
          port_ = ::std::auto_ptr< ::XMLSchema::unsignedShort > (new ::XMLSchema::unsignedShort (e));
          port_->container (this);
        }

        else if (n == "address")
        {
          address_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
          address_->container (this);
        }

        else 
        {
        }
      }
    }

    // UDPSenderDescription
    //

    UDPSenderDescription::
    UDPSenderDescription (::XSCRT::XML::Element< ACE_TCHAR > const& e)
    :Base__ (e), regulator__ ()
    {

      ::XSCRT::Parser< ACE_TCHAR > p (e);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (p.next_element ());
        ::std::basic_string< ACE_TCHAR > n (::XSCRT::XML::uq_name (e.name ()));

        if (n == "name")
        {
          name_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
          name_->container (this);
        }

        else if (n == "addr_serv_id")
        {
          addr_serv_id_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
          addr_serv_id_->container (this);
        }

        else 
        {
        }
      }
    }

    // UDPReceiverDescription
    //

    UDPReceiverDescription::
    UDPReceiverDescription (::XSCRT::XML::Element< ACE_TCHAR > const& e)
    :Base__ (e), regulator__ ()
    {

      ::XSCRT::Parser< ACE_TCHAR > p (e);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (p.next_element ());
        ::std::basic_string< ACE_TCHAR > n (::XSCRT::XML::uq_name (e.name ()));

        if (n == "name")
        {
          name_ = ::std::auto_ptr< ::XMLSchema::string< ACE_TCHAR > > (new ::XMLSchema::string< ACE_TCHAR > (e));
          name_->container (this);
        }

        else if (n == "addr_serv_id")
        {
          ::XMLSchema::string< ACE_TCHAR > t (e);
          addr_serv_id (t);
        }

        else if (n == "is_multicast")
        {
          is_multicast_ = ::std::auto_ptr< ::XMLSchema::boolean > (new ::XMLSchema::boolean (e));
          is_multicast_->container (this);
        }

        else if (n == "listen_port")
        {
          listen_port_ = ::std::auto_ptr< ::XMLSchema::unsignedShort > (new ::XMLSchema::unsignedShort (e));
          listen_port_->container (this);
        }

        else 
        {
        }
      }
    }
  }
}

namespace CIAO
{
  namespace Config_Handlers
  {
    ::CIAO::Config_Handlers::CIAOEventsDef
    CIAOEvents (xercesc::DOMDocument const* d)
    {
      ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
      if (e.name () == "CIAOEvents")
      {
        ::CIAO::Config_Handlers::CIAOEventsDef r (e);
        return r;
      }

      else
      {
        throw 1;
      }
    }
  }
}

