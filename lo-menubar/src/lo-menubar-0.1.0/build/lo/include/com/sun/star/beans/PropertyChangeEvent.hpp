#ifndef INCLUDED_COM_SUN_STAR_BEANS_PROPERTYCHANGEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_BEANS_PROPERTYCHANGEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/beans/PropertyChangeEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace beans {

inline PropertyChangeEvent::PropertyChangeEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , PropertyName()
    , Further(false)
    , PropertyHandle(0)
    , OldValue()
    , NewValue()
{
}

inline PropertyChangeEvent::PropertyChangeEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::rtl::OUString& PropertyName_, const ::sal_Bool& Further_, const ::sal_Int32& PropertyHandle_, const ::com::sun::star::uno::Any& OldValue_, const ::com::sun::star::uno::Any& NewValue_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , PropertyName(PropertyName_)
    , Further(Further_)
    , PropertyHandle(PropertyHandle_)
    , OldValue(OldValue_)
    , NewValue(NewValue_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace beans {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::beans::PropertyChangeEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.beans.PropertyChangeEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::beans::PropertyChangeEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::beans::PropertyChangeEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_BEANS_PROPERTYCHANGEEVENT_HPP
