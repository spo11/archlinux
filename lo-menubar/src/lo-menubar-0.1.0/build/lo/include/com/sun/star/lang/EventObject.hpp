#ifndef INCLUDED_COM_SUN_STAR_LANG_EVENTOBJECT_HPP
#define INCLUDED_COM_SUN_STAR_LANG_EVENTOBJECT_HPP

#include "sal/config.h"

#include "com/sun/star/lang/EventObject.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace lang {

inline EventObject::EventObject() SAL_THROW( () )
    : Source()
{
}

inline EventObject::EventObject(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_) SAL_THROW( () )
    : Source(Source_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace lang {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::lang::EventObject const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.lang.EventObject", 0, 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::lang::EventObject const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LANG_EVENTOBJECT_HPP
