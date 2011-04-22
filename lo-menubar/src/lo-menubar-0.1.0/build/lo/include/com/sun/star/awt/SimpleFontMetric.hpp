#ifndef INCLUDED_COM_SUN_STAR_AWT_SIMPLEFONTMETRIC_HPP
#define INCLUDED_COM_SUN_STAR_AWT_SIMPLEFONTMETRIC_HPP

#include "sal/config.h"

#include "com/sun/star/awt/SimpleFontMetric.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline SimpleFontMetric::SimpleFontMetric() SAL_THROW( () )
    : Ascent(0)
    , Descent(0)
    , Leading(0)
    , Slant(0)
    , FirstChar(0)
    , LastChar(0)
{
}

inline SimpleFontMetric::SimpleFontMetric(const ::sal_Int16& Ascent_, const ::sal_Int16& Descent_, const ::sal_Int16& Leading_, const ::sal_Int16& Slant_, const ::sal_Unicode& FirstChar_, const ::sal_Unicode& LastChar_) SAL_THROW( () )
    : Ascent(Ascent_)
    , Descent(Descent_)
    , Leading(Leading_)
    , Slant(Slant_)
    , FirstChar(FirstChar_)
    , LastChar(LastChar_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::SimpleFontMetric const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoCharType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoCharType >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.SimpleFontMetric", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::SimpleFontMetric const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::SimpleFontMetric >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_SIMPLEFONTMETRIC_HPP
