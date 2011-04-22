#ifndef INCLUDED_COM_SUN_STAR_UI_XACCELERATORCONFIGURATION_HPP
#define INCLUDED_COM_SUN_STAR_UI_XACCELERATORCONFIGURATION_HPP

#include "sal/config.h"

#include "com/sun/star/ui/XAcceleratorConfiguration.hdl"

#include "com/sun/star/awt/KeyEvent.hpp"
#include "com/sun/star/ui/XUIConfiguration.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/container/NoSuchElementException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/ui/XUIConfigurationPersistence.hpp"
#include "com/sun/star/ui/XUIConfigurationStorage.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace ui {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ui::XAcceleratorConfiguration const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[3];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::ui::XUIConfigurationPersistence > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::ui::XUIConfigurationStorage > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::ui::XUIConfiguration > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.ui.XAcceleratorConfiguration", 3, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::ui::XAcceleratorConfiguration > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::ui::XAcceleratorConfiguration > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::ui::XAcceleratorConfiguration::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::ui::XAcceleratorConfiguration > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_UI_XACCELERATORCONFIGURATION_HPP
