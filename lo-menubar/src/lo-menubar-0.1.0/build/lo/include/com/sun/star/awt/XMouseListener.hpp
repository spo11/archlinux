#ifndef INCLUDED_COM_SUN_STAR_AWT_XMOUSELISTENER_HPP
#define INCLUDED_COM_SUN_STAR_AWT_XMOUSELISTENER_HPP

#include "sal/config.h"

#include "com/sun/star/awt/XMouseListener.hdl"

#include "com/sun/star/awt/MouseEvent.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/lang/XEventListener.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::XMouseListener const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XEventListener > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.awt.XMouseListener", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::awt::XMouseListener > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::awt::XMouseListener > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::awt::XMouseListener::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::awt::XMouseListener > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_AWT_XMOUSELISTENER_HPP
