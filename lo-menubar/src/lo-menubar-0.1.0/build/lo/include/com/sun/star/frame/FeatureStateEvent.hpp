#ifndef INCLUDED_COM_SUN_STAR_FRAME_FEATURESTATEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_FEATURESTATEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/frame/FeatureStateEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/util/URL.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame {

inline FeatureStateEvent::FeatureStateEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , FeatureURL()
    , FeatureDescriptor()
    , IsEnabled(false)
    , Requery(false)
    , State()
{
}

inline FeatureStateEvent::FeatureStateEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::util::URL& FeatureURL_, const ::rtl::OUString& FeatureDescriptor_, const ::sal_Bool& IsEnabled_, const ::sal_Bool& Requery_, const ::com::sun::star::uno::Any& State_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , FeatureURL(FeatureURL_)
    , FeatureDescriptor(FeatureDescriptor_)
    , IsEnabled(IsEnabled_)
    , Requery(Requery_)
    , State(State_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace frame {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::FeatureStateEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::util::URL >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.FeatureStateEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::FeatureStateEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::FeatureStateEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_FEATURESTATEEVENT_HPP
