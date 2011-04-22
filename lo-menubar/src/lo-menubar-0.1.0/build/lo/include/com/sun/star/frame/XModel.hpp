#ifndef INCLUDED_COM_SUN_STAR_FRAME_XMODEL_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_XMODEL_HPP

#include "sal/config.h"

#include "com/sun/star/frame/XModel.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/frame/XController.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/container/NoSuchElementException.hpp"
#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace frame {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::XModel const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.frame.XModel", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::frame::XModel > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::frame::XModel > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::frame::XModel::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::frame::XModel > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_XMODEL_HPP
