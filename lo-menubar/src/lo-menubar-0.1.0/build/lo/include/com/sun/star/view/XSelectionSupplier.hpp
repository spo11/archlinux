#ifndef INCLUDED_COM_SUN_STAR_VIEW_XSELECTIONSUPPLIER_HPP
#define INCLUDED_COM_SUN_STAR_VIEW_XSELECTIONSUPPLIER_HPP

#include "sal/config.h"

#include "com/sun/star/view/XSelectionSupplier.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/view/XSelectionChangeListener.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace view {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::view::XSelectionSupplier const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.view.XSelectionSupplier", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::view::XSelectionSupplier > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::view::XSelectionSupplier > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::view::XSelectionSupplier::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::view::XSelectionSupplier > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_VIEW_XSELECTIONSUPPLIER_HPP
