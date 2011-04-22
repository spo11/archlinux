#ifndef INCLUDED_COM_SUN_STAR_AWT_WINDOWDESCRIPTOR_HPP
#define INCLUDED_COM_SUN_STAR_AWT_WINDOWDESCRIPTOR_HPP

#include "sal/config.h"

#include "com/sun/star/awt/WindowDescriptor.hdl"

#include "com/sun/star/awt/XWindowPeer.hpp"
#include "com/sun/star/awt/WindowClass.hpp"
#include "com/sun/star/awt/Rectangle.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline WindowDescriptor::WindowDescriptor() SAL_THROW( () )
    : Type(::com::sun::star::awt::WindowClass_TOP)
    , WindowServiceName()
    , Parent()
    , ParentIndex(0)
    , Bounds()
    , WindowAttributes(0)
{
}

inline WindowDescriptor::WindowDescriptor(const ::com::sun::star::awt::WindowClass& Type_, const ::rtl::OUString& WindowServiceName_, const ::com::sun::star::uno::Reference< ::com::sun::star::awt::XWindowPeer >& Parent_, const ::sal_Int16& ParentIndex_, const ::com::sun::star::awt::Rectangle& Bounds_, const ::sal_Int32& WindowAttributes_) SAL_THROW( () )
    : Type(Type_)
    , WindowServiceName(WindowServiceName_)
    , Parent(Parent_)
    , ParentIndex(ParentIndex_)
    , Bounds(Bounds_)
    , WindowAttributes(WindowAttributes_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::WindowDescriptor const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::awt::WindowClass >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::awt::XWindowPeer > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::Rectangle >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.WindowDescriptor", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::WindowDescriptor const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::WindowDescriptor >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_WINDOWDESCRIPTOR_HPP
