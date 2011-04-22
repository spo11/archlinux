#ifndef INCLUDED_COM_SUN_STAR_FRAME_DISPATCHDESCRIPTOR_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_DISPATCHDESCRIPTOR_HPP

#include "sal/config.h"

#include "com/sun/star/frame/DispatchDescriptor.hdl"

#include "com/sun/star/util/URL.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame {

inline DispatchDescriptor::DispatchDescriptor() SAL_THROW( () )
    : FeatureURL()
    , FrameName()
    , SearchFlags(0)
{
}

inline DispatchDescriptor::DispatchDescriptor(const ::com::sun::star::util::URL& FeatureURL_, const ::rtl::OUString& FrameName_, const ::sal_Int32& SearchFlags_) SAL_THROW( () )
    : FeatureURL(FeatureURL_)
    , FrameName(FrameName_)
    , SearchFlags(SearchFlags_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace frame {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::DispatchDescriptor const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::util::URL >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.DispatchDescriptor", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::DispatchDescriptor const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::DispatchDescriptor >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_DISPATCHDESCRIPTOR_HPP
