#ifndef INCLUDED_COM_SUN_STAR_TEXT_XTEXTVIEWCURSOR_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_XTEXTVIEWCURSOR_HPP

#include "sal/config.h"

#include "com/sun/star/text/XTextViewCursor.hdl"

#include "com/sun/star/awt/Point.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/text/XTextCursor.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace text {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::text::XTextViewCursor const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::text::XTextCursor > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.text.XTextViewCursor", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::text::XTextViewCursor > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::text::XTextViewCursor > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::text::XTextViewCursor::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::text::XTextViewCursor > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_XTEXTVIEWCURSOR_HPP
