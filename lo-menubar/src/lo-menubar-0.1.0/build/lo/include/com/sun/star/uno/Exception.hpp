#ifndef INCLUDED_COM_SUN_STAR_UNO_EXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UNO_EXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/uno/Exception.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace uno {

inline Exception::Exception() SAL_THROW( () )
    : Message()
    , Context()
{ }

inline Exception::Exception(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : Message(Message_)
    , Context(Context_)
{ }

Exception::Exception(Exception const & the_other): Message(the_other.Message), Context(the_other.Context) {}

Exception::~Exception() {}

Exception & Exception::operator =(Exception const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    Message = the_other.Message;
    Context = the_other.Context;
    return *this;
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(const ::com::sun::star::uno::Exception *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Exception >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UNO_EXCEPTION_HPP
