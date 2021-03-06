#ifndef INCLUDED_COM_SUN_STAR_AWT_DEVICEINFO_HPP
#define INCLUDED_COM_SUN_STAR_AWT_DEVICEINFO_HPP

#include "sal/config.h"

#include "com/sun/star/awt/DeviceInfo.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline DeviceInfo::DeviceInfo() SAL_THROW( () )
    : Width(0)
    , Height(0)
    , LeftInset(0)
    , TopInset(0)
    , RightInset(0)
    , BottomInset(0)
    , PixelPerMeterX(0)
    , PixelPerMeterY(0)
    , BitsPerPixel(0)
    , Capabilities(0)
{
}

inline DeviceInfo::DeviceInfo(const ::sal_Int32& Width_, const ::sal_Int32& Height_, const ::sal_Int32& LeftInset_, const ::sal_Int32& TopInset_, const ::sal_Int32& RightInset_, const ::sal_Int32& BottomInset_, const double& PixelPerMeterX_, const double& PixelPerMeterY_, const ::sal_Int16& BitsPerPixel_, const ::sal_Int32& Capabilities_) SAL_THROW( () )
    : Width(Width_)
    , Height(Height_)
    , LeftInset(LeftInset_)
    , TopInset(TopInset_)
    , RightInset(RightInset_)
    , BottomInset(BottomInset_)
    , PixelPerMeterX(PixelPerMeterX_)
    , PixelPerMeterY(PixelPerMeterY_)
    , BitsPerPixel(BitsPerPixel_)
    , Capabilities(Capabilities_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::DeviceInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.DeviceInfo", 0, 10, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::DeviceInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::DeviceInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_DEVICEINFO_HPP
