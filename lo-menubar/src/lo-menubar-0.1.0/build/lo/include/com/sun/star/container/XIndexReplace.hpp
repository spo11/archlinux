#ifndef INCLUDED_COM_SUN_STAR_CONTAINER_XINDEXREPLACE_HPP
#define INCLUDED_COM_SUN_STAR_CONTAINER_XINDEXREPLACE_HPP

#include "sal/config.h"

#include "com/sun/star/container/XIndexReplace.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/container/XIndexAccess.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/lang/IndexOutOfBoundsException.hpp"
#include "com/sun/star/lang/WrappedTargetException.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace container {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::container::XIndexReplace const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XIndexAccess > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.container.XIndexReplace", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::container::XIndexReplace > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::container::XIndexReplace > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::container::XIndexReplace::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::container::XIndexReplace > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_CONTAINER_XINDEXREPLACE_HPP
