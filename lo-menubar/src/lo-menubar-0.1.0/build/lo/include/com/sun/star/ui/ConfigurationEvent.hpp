#ifndef INCLUDED_COM_SUN_STAR_UI_CONFIGURATIONEVENT_HPP
#define INCLUDED_COM_SUN_STAR_UI_CONFIGURATIONEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/ui/ConfigurationEvent.hdl"

#include "com/sun/star/container/ContainerEvent.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ui {

inline ConfigurationEvent::ConfigurationEvent() SAL_THROW( () )
    : ::com::sun::star::container::ContainerEvent()
    , ResourceURL()
    , aInfo()
{
}

inline ConfigurationEvent::ConfigurationEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Any& Accessor_, const ::com::sun::star::uno::Any& Element_, const ::com::sun::star::uno::Any& ReplacedElement_, const ::rtl::OUString& ResourceURL_, const ::com::sun::star::uno::Any& aInfo_) SAL_THROW( () )
    : ::com::sun::star::container::ContainerEvent(Source_, Accessor_, Element_, ReplacedElement_)
    , ResourceURL(ResourceURL_)
    , aInfo(aInfo_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ui {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ui::ConfigurationEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ui.ConfigurationEvent", ::cppu::UnoType< ::com::sun::star::container::ContainerEvent >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ui::ConfigurationEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ui::ConfigurationEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UI_CONFIGURATIONEVENT_HPP
