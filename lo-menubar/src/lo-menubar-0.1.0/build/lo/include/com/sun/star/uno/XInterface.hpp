#ifndef INCLUDED_COM_SUN_STAR_UNO_XINTERFACE_HPP
#define INCLUDED_COM_SUN_STAR_UNO_XINTERFACE_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XInterface.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::XInterface >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::uno::XInterface::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_UNO_XINTERFACE_HPP
