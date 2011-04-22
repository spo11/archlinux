#ifndef INCLUDED_COM_SUN_STAR_AWT_FOCUSEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_FOCUSEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/FocusEvent.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline FocusEvent::FocusEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , FocusFlags(0)
    , NextFocus()
    , Temporary(false)
{
}

inline FocusEvent::FocusEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int16& FocusFlags_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& NextFocus_, const ::sal_Bool& Temporary_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , FocusFlags(FocusFlags_)
    , NextFocus(NextFocus_)
    , Temporary(Temporary_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::FocusEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.FocusEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::FocusEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::FocusEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_FOCUSEVENT_HPP
