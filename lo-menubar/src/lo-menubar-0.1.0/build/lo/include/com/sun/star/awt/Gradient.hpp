#ifndef INCLUDED_COM_SUN_STAR_AWT_GRADIENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_GRADIENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/Gradient.hdl"

#include "com/sun/star/awt/GradientStyle.hpp"
#include "com/sun/star/util/Color.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline Gradient::Gradient() SAL_THROW( () )
    : Style(::com::sun::star::awt::GradientStyle_LINEAR)
    , StartColor(0)
    , EndColor(0)
    , Angle(0)
    , Border(0)
    , XOffset(0)
    , YOffset(0)
    , StartIntensity(0)
    , EndIntensity(0)
    , StepCount(0)
{
}

inline Gradient::Gradient(const ::com::sun::star::awt::GradientStyle& Style_, const ::sal_Int32& StartColor_, const ::sal_Int32& EndColor_, const ::sal_Int16& Angle_, const ::sal_Int16& Border_, const ::sal_Int16& XOffset_, const ::sal_Int16& YOffset_, const ::sal_Int16& StartIntensity_, const ::sal_Int16& EndIntensity_, const ::sal_Int16& StepCount_) SAL_THROW( () )
    : Style(Style_)
    , StartColor(StartColor_)
    , EndColor(EndColor_)
    , Angle(Angle_)
    , Border(Border_)
    , XOffset(XOffset_)
    , YOffset(YOffset_)
    , StartIntensity(StartIntensity_)
    , EndIntensity(EndIntensity_)
    , StepCount(StepCount_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::Gradient const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::awt::GradientStyle >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.Gradient", 0, 10, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::Gradient const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::Gradient >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_GRADIENT_HPP
