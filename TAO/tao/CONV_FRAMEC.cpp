// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:314


#include "CONV_FRAMEC.h"
#include "tao/Any_T.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "CONV_FRAMEC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CONV_FRAME_CodeSetId[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  37,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x65744964), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
    10,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657449), 
  ACE_NTOHL (0x64000000),  // name = CodeSetId
    CORBA::tk_ulong,

};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetId (
    CORBA::tk_alias,
    sizeof (_oc_CONV_FRAME_CodeSetId),
    (char *) &_oc_CONV_FRAME_CodeSetId,
    0,
    sizeof (CONV_FRAME::CodeSetId)
  );

TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (CONV_FRAME)
TAO_NAMESPACE_DEFINE (
    ::CORBA::TypeCode_ptr,
    _tc_CodeSetId,
    &_tc_TAO_tc_CONV_FRAME_CodeSetId
  )
TAO_NAMESPACE_END

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CONV_FRAME_CodeSetComponent[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  44,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x6574436f), 
  ACE_NTOHL (0x6d706f6e), 
  ACE_NTOHL (0x656e743a), 
  ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetComponent:1.0
    17,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657443), 
  ACE_NTOHL (0x6f6d706f), 
  ACE_NTOHL (0x6e656e74), 
  ACE_NTOHL (0x0),  // name = CodeSetComponent
  2, // member count
    16,
  ACE_NTOHL (0x6e617469), 
  ACE_NTOHL (0x76655f63), 
  ACE_NTOHL (0x6f64655f), 
  ACE_NTOHL (0x73657400),  // name = native_code_set
    CORBA::tk_alias, // typecode kind for typedefs
  68, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    37,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x65744964), 
    ACE_NTOHL (0x3a312e30), 
    ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
        10,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657449), 
    ACE_NTOHL (0x64000000),  // name = CodeSetId
        CORBA::tk_ulong,


  21,
  ACE_NTOHL (0x636f6e76), 
  ACE_NTOHL (0x65727369), 
  ACE_NTOHL (0x6f6e5f63), 
  ACE_NTOHL (0x6f64655f), 
  ACE_NTOHL (0x73657473), 
  ACE_NTOHL (0x0),  // name = conversion_code_sets
    CORBA::tk_sequence, // typecode kind
  16, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    0xffffffff, // indirection
    0xffffff88, // negative offset (-120)
    0U,

};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetComponent (
    CORBA::tk_struct,
    sizeof (_oc_CONV_FRAME_CodeSetComponent),
    (char *) &_oc_CONV_FRAME_CodeSetComponent,
    0,
    sizeof (CONV_FRAME::CodeSetComponent)
  );

TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (CONV_FRAME)
TAO_NAMESPACE_DEFINE (
    ::CORBA::TypeCode_ptr,
    _tc_CodeSetComponent,
    &_tc_TAO_tc_CONV_FRAME_CodeSetComponent
  )
TAO_NAMESPACE_END

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/structure_cs.cpp:66

void CONV_FRAME::CodeSetComponent::_tao_any_destructor (void *_tao_void_pointer)
{
  CodeSetComponent *tmp = ACE_static_cast (CodeSetComponent*, _tao_void_pointer);
  delete tmp;
}

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/sequence_cs.cpp:50

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

template class
  TAO_Unbounded_Sequence<
      CONV_FRAME::CodeSetId
    >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
  TAO_Unbounded_Sequence< \
      CONV_FRAME::CodeSetId \
    >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_type.cpp:274

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

template class
  TAO_Var_Var_T<
      CodeSetComponent
    >;

template class
  TAO_Out_T<
      CodeSetComponent,
      CodeSetComponent_var
    >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
  TAO_Var_Var_T< \
      CodeSetComponent \
    >

# pragma instantiate \
  TAO_Out_T< \
      CodeSetComponent, \
      CodeSetComponent_var \
    >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CONV_FRAME_CodeSetComponentInfo[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  48,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x6574436f), 
  ACE_NTOHL (0x6d706f6e), 
  ACE_NTOHL (0x656e7449), 
  ACE_NTOHL (0x6e666f3a), 
  ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetComponentInfo:1.0
    21,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657443), 
  ACE_NTOHL (0x6f6d706f), 
  ACE_NTOHL (0x6e656e74), 
  ACE_NTOHL (0x496e666f), 
  ACE_NTOHL (0x0),  // name = CodeSetComponentInfo
  2, // member count
    12,
  ACE_NTOHL (0x466f7243), 
  ACE_NTOHL (0x68617244), 
  ACE_NTOHL (0x61746100),  // name = ForCharData
    CORBA::tk_struct, // typecode kind
  228, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    44,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x6574436f), 
    ACE_NTOHL (0x6d706f6e), 
    ACE_NTOHL (0x656e743a), 
    ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetComponent:1.0
        17,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657443), 
    ACE_NTOHL (0x6f6d706f), 
    ACE_NTOHL (0x6e656e74), 
    ACE_NTOHL (0x0),  // name = CodeSetComponent
    2, // member count
        16,
    ACE_NTOHL (0x6e617469), 
    ACE_NTOHL (0x76655f63), 
    ACE_NTOHL (0x6f64655f), 
    ACE_NTOHL (0x73657400),  // name = native_code_set
        CORBA::tk_alias, // typecode kind for typedefs
    68, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      37,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f4e56), 
      ACE_NTOHL (0x5f465241), 
      ACE_NTOHL (0x4d452f43), 
      ACE_NTOHL (0x6f646553), 
      ACE_NTOHL (0x65744964), 
      ACE_NTOHL (0x3a312e30), 
      ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
            10,
      ACE_NTOHL (0x436f6465), 
      ACE_NTOHL (0x53657449), 
      ACE_NTOHL (0x64000000),  // name = CodeSetId
            CORBA::tk_ulong,


    21,
    ACE_NTOHL (0x636f6e76), 
    ACE_NTOHL (0x65727369), 
    ACE_NTOHL (0x6f6e5f63), 
    ACE_NTOHL (0x6f64655f), 
    ACE_NTOHL (0x73657473), 
    ACE_NTOHL (0x0),  // name = conversion_code_sets
        CORBA::tk_sequence, // typecode kind
    16, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      0xffffffff, // indirection
      0xffffff88, // negative offset (-120)
      0U,


  13,
  ACE_NTOHL (0x466f7257), 
  ACE_NTOHL (0x63686172), 
  ACE_NTOHL (0x44617461), 
  ACE_NTOHL (0x0),  // name = ForWcharData
    0xffffffff, // indirection
  0xfffffefc, // negative offset (-260)
};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetComponentInfo (
    CORBA::tk_struct,
    sizeof (_oc_CONV_FRAME_CodeSetComponentInfo),
    (char *) &_oc_CONV_FRAME_CodeSetComponentInfo,
    0,
    sizeof (CONV_FRAME::CodeSetComponentInfo)
  );

TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (CONV_FRAME)
TAO_NAMESPACE_DEFINE (
    ::CORBA::TypeCode_ptr,
    _tc_CodeSetComponentInfo,
    &_tc_TAO_tc_CONV_FRAME_CodeSetComponentInfo
  )
TAO_NAMESPACE_END

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/structure_cs.cpp:66

void CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor (void *_tao_void_pointer)
{
  CodeSetComponentInfo *tmp = ACE_static_cast (CodeSetComponentInfo*, _tao_void_pointer);
  delete tmp;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_type.cpp:274

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

template class
  TAO_Var_Var_T<
      CodeSetComponentInfo
    >;

template class
  TAO_Out_T<
      CodeSetComponentInfo,
      CodeSetComponentInfo_var
    >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
  TAO_Var_Var_T< \
      CodeSetComponentInfo \
    >

# pragma instantiate \
  TAO_Out_T< \
      CodeSetComponentInfo, \
      CodeSetComponentInfo_var \
    >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CONV_FRAME_CodeSetContext[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  42,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f4e56), 
  ACE_NTOHL (0x5f465241), 
  ACE_NTOHL (0x4d452f43), 
  ACE_NTOHL (0x6f646553), 
  ACE_NTOHL (0x6574436f), 
  ACE_NTOHL (0x6e746578), 
  ACE_NTOHL (0x743a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetContext:1.0
    15,
  ACE_NTOHL (0x436f6465), 
  ACE_NTOHL (0x53657443), 
  ACE_NTOHL (0x6f6e7465), 
  ACE_NTOHL (0x78740000),  // name = CodeSetContext
  2, // member count
    10,
  ACE_NTOHL (0x63686172), 
  ACE_NTOHL (0x5f646174), 
  ACE_NTOHL (0x61000000),  // name = char_data
    CORBA::tk_alias, // typecode kind for typedefs
  68, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    37,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f4e56), 
    ACE_NTOHL (0x5f465241), 
    ACE_NTOHL (0x4d452f43), 
    ACE_NTOHL (0x6f646553), 
    ACE_NTOHL (0x65744964), 
    ACE_NTOHL (0x3a312e30), 
    ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CONV_FRAME/CodeSetId:1.0
        10,
    ACE_NTOHL (0x436f6465), 
    ACE_NTOHL (0x53657449), 
    ACE_NTOHL (0x64000000),  // name = CodeSetId
        CORBA::tk_ulong,


  11,
  ACE_NTOHL (0x77636861), 
  ACE_NTOHL (0x725f6461), 
  ACE_NTOHL (0x74610000),  // name = wchar_data
    0xffffffff, // indirection
  0xffffffa0, // negative offset (-96)
};

static CORBA::TypeCode _tc_TAO_tc_CONV_FRAME_CodeSetContext (
    CORBA::tk_struct,
    sizeof (_oc_CONV_FRAME_CodeSetContext),
    (char *) &_oc_CONV_FRAME_CodeSetContext,
    0,
    sizeof (CONV_FRAME::CodeSetContext)
  );

TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (CONV_FRAME)
TAO_NAMESPACE_DEFINE (
    ::CORBA::TypeCode_ptr,
    _tc_CodeSetContext,
    &_tc_TAO_tc_CONV_FRAME_CodeSetContext
  )
TAO_NAMESPACE_END

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/structure_cs.cpp:66

void CONV_FRAME::CodeSetContext::_tao_any_destructor (void *_tao_void_pointer)
{
  CodeSetContext *tmp = ACE_static_cast (CodeSetContext*, _tao_void_pointer);
  delete tmp;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_type.cpp:274

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

template class
  TAO_Fixed_Var_T<
      CodeSetContext
    >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
  TAO_Fixed_Var_T< \
      CodeSetContext \
    >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetComponent &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponent>::insert_copy (
      _tao_any,
      CONV_FRAME::CodeSetComponent::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetComponent,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetComponent *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponent>::insert (
      _tao_any,
      CONV_FRAME::CodeSetComponent::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetComponent,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetComponent *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const CONV_FRAME::CodeSetComponent *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetComponent *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponent>::extract (
        _tao_any,
        CONV_FRAME::CodeSetComponent::_tao_any_destructor,
        CONV_FRAME::_tc_CodeSetComponent,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
  template class TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponent>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
# pragma instantiate TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponent>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetComponentInfo &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponentInfo>::insert_copy (
      _tao_any,
      CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetComponentInfo,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetComponentInfo *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponentInfo>::insert (
      _tao_any,
      CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetComponentInfo,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetComponentInfo *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const CONV_FRAME::CodeSetComponentInfo *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetComponentInfo *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponentInfo>::extract (
        _tao_any,
        CONV_FRAME::CodeSetComponentInfo::_tao_any_destructor,
        CONV_FRAME::_tc_CodeSetComponentInfo,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
  template class TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponentInfo>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
# pragma instantiate TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetComponentInfo>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

// TAO_IDL - Generated from 
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetContext &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetContext>::insert_copy (
      _tao_any,
      CONV_FRAME::CodeSetContext::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetContext,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetContext *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetContext>::insert (
      _tao_any,
      CONV_FRAME::CodeSetContext::_tao_any_destructor,
      CONV_FRAME::_tc_CodeSetContext,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CONV_FRAME::CodeSetContext *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const CONV_FRAME::CodeSetContext *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CONV_FRAME::CodeSetContext *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetContext>::extract (
        _tao_any,
        CONV_FRAME::CodeSetContext::_tao_any_destructor,
        CONV_FRAME::_tc_CodeSetContext,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
  template class TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetContext>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
# pragma instantiate TAO::Any_Dual_Impl_T<CONV_FRAME::CodeSetContext>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/cdr_op_cs.cpp:98

#if !defined _TAO_CDR_OP_CONV_FRAME_CodeSetComponent__tao_seq_CodeSetId_CPP_
#define _TAO_CDR_OP_CONV_FRAME_CodeSetComponent__tao_seq_CodeSetId_CPP_

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CONV_FRAME::CodeSetComponent::_tao_seq_CodeSetId &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len = _tao_sequence.length ();
  
  if (strm << _tao_seq_len)
    {
      // Encode all elements.
      return strm.write_ulong_array (_tao_sequence.get_buffer (), _tao_sequence.length ());
    }
  
  return 0;
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CONV_FRAME::CodeSetComponent::_tao_seq_CodeSetId &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len;
  
  if (strm >> _tao_seq_len)
    {
      // Add a check to the length of the sequence
      // to make sure it does not exceed the length
      // of the stream. (See bug 58.)
      if (_tao_seq_len > strm.length ())
        {
          return 0;
        }
      
      // Set the length of the sequence.
      _tao_sequence.length (_tao_seq_len);
      
      // If length is 0 we return true.
      if (0 >= _tao_seq_len) 
        {
          return 1;
        }
      
      // Retrieve all the elements.
      return strm.read_ulong_array (_tao_sequence.get_buffer (), _tao_sequence.length ());
    }
  
  return 0;
}

#endif /* _TAO_CDR_OP_CONV_FRAME_CodeSetComponent__tao_seq_CodeSetId_CPP_ */

