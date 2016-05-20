// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.
#ifndef __calculator__
#define __calculator__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_calculator
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_calculator
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_calculator
#endif






#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif



_CORBA_MODULE calculator

_CORBA_MODULE_BEG

#ifndef __calculator_mCalculation__
#define __helloworld_mCalculation__
  class Calculation;
  class _objref_Calculation;
  class _impl_Calculation;
  
  typedef _objref_Calculation* Calculation_ptr;
  typedef Calculation_ptr CalculationRef;

  class Calculation_Helper {
  public:
    typedef Calculation_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_Calculation, Calculation_Helper> Calculation_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_Calculation,Calculation_Helper > Calculation_out;

#endif

  // interface Calculation
  class Calculation {
  public:
    // Declarations for this interface type.
    typedef Calculation_ptr _ptr_type;
    typedef Calculation_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static inline _ptr_type _fromObjRef(omniObjRef* o) {
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_Calculation :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    // IDL operations
    //char* echoString(const char* mesg);
    ::CORBA::String calcSin(const int nmax);

    // Constructors
    inline _objref_Calculation()  { _PR_setobj(0); }  // nil
    _objref_Calculation(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_Calculation();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_Calculation(const _objref_Calculation&);
    _objref_Calculation& operator = (const _objref_Calculation&);
    // not implemented

    friend class Calculation;
  };

  class _pof_Calculation : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_Calculation() : _OMNI_NS(proxyObjectFactory)(Calculation::_PD_repoId) {}
    virtual ~_pof_Calculation();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_Calculation :
    public virtual omniServant
  {
  public:
    virtual ~_impl_Calculation();

    //virtual char* echoString(const char* mesg) = 0;
    virtual string calcSin(const int nmax) = 0;    

  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


_CORBA_MODULE_END



_CORBA_MODULE POA_helloworld
_CORBA_MODULE_BEG

  class Calculation :
    public virtual helloworld::_impl_Calculation,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~Calculation();

    inline ::helloworld::Calculation_ptr _this() {
      return (::helloworld::Calculation_ptr) _do_this(::helloworld::Calculation::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_helloworld
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
helloworld::Calculation::_marshalObjRef(::helloworld::Calculation_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_calculator
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_calculator
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_calculator
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_calculator
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_calculator
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_calculator
#endif

#endif  // __calculator_hh__

