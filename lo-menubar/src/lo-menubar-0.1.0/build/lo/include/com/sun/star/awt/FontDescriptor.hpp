#ifndef INCLUDED_COM_SUN_STAR_AWT_FONTDESCRIPTOR_HPP
#define INCLUDED_COM_SUN_STAR_AWT_FONTDESCRIPTOR_HPP

#include "sal/config.h"

#include "com/sun/star/awt/FontDescriptor.hdl"

#include "com/sun/star/awt/FontSlant.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline FontDescriptor::FontDescriptor() SAL_THROW( () )
    : Name()
    , Height(0)
    , Width(0)
    , StyleName()
    , Family(0)
    , CharSet(0)
    , Pitch(0)
    , CharacterWidth(0)
    , Weight(0)
    , Slant(::com::sun::star::awt::FontSlant_NONE)
    , Underline(0)
    , Strikeout(0)
    , Orientation(0)
    , Kerning(false)
    , WordLineMode(false)
    , Type(0)
{
}

inline FontDescriptor::FontDescriptor(const ::rtl::OUString& Name_, const ::sal_Int16& Height_, const ::sal_Int16& Width_, const ::rtl::OUString& StyleName_, const ::sal_Int16& Family_, const ::sal_Int16& CharSet_, const ::sal_Int16& Pitch_, const float& CharacterWidth_, const float& Weight_, const ::com::sun::star::awt::FontSlant& Slant_, const ::sal_Int16& Underline_, const ::sal_Int16& Strikeout_, const float& Orientation_, const ::sal_Bool& Kerning_, const ::sal_Bool& WordLineMode_, const ::sal_Int16& Type_) SAL_THROW( () )
    : Name(Name_)
    , Height(Height_)
    , Width(Width_)
    , StyleName(StyleName_)
    , Family(Family_)
    , CharSet(CharSet_)
    , Pitch(Pitch_)
    , CharacterWidth(CharacterWidth_)
    , Weight(Weight_)
    , Slant(Slant_)
    , Underline(Underline_)
    , Strikeout(Strikeout_)
    , Orientation(Orientation_)
    , Kerning(Kerning_)
    , WordLineMode(WordLineMode_)
    , Type(Type_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::FontDescriptor const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< float >::get().getTypeLibType(),
            ::cppu::UnoType< float >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::FontSlant >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< float >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.FontDescriptor", 0, 16, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::FontDescriptor const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::FontDescriptor >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_FONTDESCRIPTOR_HPP
