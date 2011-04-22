#ifndef INCLUDED_COM_SUN_STAR_FRAME_FRAMEACTIONEVENT_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_FRAMEACTIONEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/frame/FrameActionEvent.hdl"

#include "com/sun/star/frame/FrameAction.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/frame/XFrame.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame {

inline FrameActionEvent::FrameActionEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Frame()
    , Action(::com::sun::star::frame::FrameAction_COMPONENT_ATTACHED)
{
}

inline FrameActionEvent::FrameActionEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Reference< ::com::sun::star::frame::XFrame >& Frame_, const ::com::sun::star::frame::FrameAction& Action_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Frame(Frame_)
    , Action(Action_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace frame {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::FrameActionEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::frame::XFrame > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::frame::FrameAction >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.FrameActionEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::FrameActionEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::FrameActionEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_FRAMEACTIONEVENT_HPP
