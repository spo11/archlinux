#ifndef INCLUDED_COM_SUN_STAR_AWT_MENULOGO_HPP
#define INCLUDED_COM_SUN_STAR_AWT_MENULOGO_HPP

#include "sal/config.h"

#include "com/sun/star/awt/MenuLogo.hdl"

#include "com/sun/star/util/Color.hpp"
#include "com/sun/star/graphic/XGraphic.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline MenuLogo::MenuLogo() SAL_THROW( () )
    : Graphic()
    , StartColor(0)
    , EndColor(0)
{
}

inline MenuLogo::MenuLogo(const ::com::sun::star::uno::Reference< ::com::sun::star::graphic::XGraphic >& Graphic_, const ::sal_Int32& StartColor_, const ::sal_Int32& EndColor_) SAL_THROW( () )
    : Graphic(Graphic_)
    , StartColor(StartColor_)
    , EndColor(EndColor_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::MenuLogo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::graphic::XGraphic > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.MenuLogo", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::MenuLogo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::MenuLogo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_MENULOGO_HPP
