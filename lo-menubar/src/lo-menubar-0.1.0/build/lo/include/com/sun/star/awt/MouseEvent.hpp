#ifndef INCLUDED_COM_SUN_STAR_AWT_MOUSEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_MOUSEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/MouseEvent.hdl"

#include "com/sun/star/awt/InputEvent.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline MouseEvent::MouseEvent() SAL_THROW( () )
    : ::com::sun::star::awt::InputEvent()
    , Buttons(0)
    , X(0)
    , Y(0)
    , ClickCount(0)
    , PopupTrigger(false)
{
}

inline MouseEvent::MouseEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int16& Modifiers_, const ::sal_Int16& Buttons_, const ::sal_Int32& X_, const ::sal_Int32& Y_, const ::sal_Int32& ClickCount_, const ::sal_Bool& PopupTrigger_) SAL_THROW( () )
    : ::com::sun::star::awt::InputEvent(Source_, Modifiers_)
    , Buttons(Buttons_)
    , X(X_)
    , Y(Y_)
    , ClickCount(ClickCount_)
    , PopupTrigger(PopupTrigger_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::MouseEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.MouseEvent", ::cppu::UnoType< ::com::sun::star::awt::InputEvent >::get().getTypeLibType(), 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::MouseEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::MouseEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_MOUSEEVENT_HPP
