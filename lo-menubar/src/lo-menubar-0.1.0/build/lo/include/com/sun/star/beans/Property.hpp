#ifndef INCLUDED_COM_SUN_STAR_BEANS_PROPERTY_HPP
#define INCLUDED_COM_SUN_STAR_BEANS_PROPERTY_HPP

#include "sal/config.h"

#include "com/sun/star/beans/Property.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace beans {

inline Property::Property() SAL_THROW( () )
    : Name()
    , Handle(0)
    , Type()
    , Attributes(0)
{
}

inline Property::Property(const ::rtl::OUString& Name_, const ::sal_Int32& Handle_, const ::com::sun::star::uno::Type& Type_, const ::sal_Int16& Attributes_) SAL_THROW( () )
    : Name(Name_)
    , Handle(Handle_)
    , Type(Type_)
    , Attributes(Attributes_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace beans {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::beans::Property const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Type >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.beans.Property", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::beans::Property const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::beans::Property >::get();
}

#endif // INCLUDED_COM_SUN_STAR_BEANS_PROPERTY_HPP
