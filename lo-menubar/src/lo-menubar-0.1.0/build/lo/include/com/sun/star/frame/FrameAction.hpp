#ifndef INCLUDED_COM_SUN_STAR_FRAME_FRAMEACTION_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_FRAMEACTION_HPP

#include "sal/config.h"

#include "com/sun/star/frame/FrameAction.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace frame {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::FrameAction const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.frame.FrameAction",
                                       ::com::sun::star::frame::FrameAction_COMPONENT_ATTACHED );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::FrameAction const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::FrameAction >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_FRAMEACTION_HPP
