#ifndef INCLUDED_COM_SUN_STAR_AWT_RECTANGLE_HPP
#define INCLUDED_COM_SUN_STAR_AWT_RECTANGLE_HPP

#include "sal/config.h"

#include "com/sun/star/awt/Rectangle.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline Rectangle::Rectangle() SAL_THROW( () )
    : X(0)
    , Y(0)
    , Width(0)
    , Height(0)
{
}

inline Rectangle::Rectangle(const ::sal_Int32& X_, const ::sal_Int32& Y_, const ::sal_Int32& Width_, const ::sal_Int32& Height_) SAL_THROW( () )
    : X(X_)
    , Y(Y_)
    , Width(Width_)
    , Height(Height_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::Rectangle const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.Rectangle", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::Rectangle const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::Rectangle >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_RECTANGLE_HPP
