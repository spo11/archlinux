#ifndef INCLUDED_COM_SUN_STAR_LANG_ILLEGALARGUMENTEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_LANG_ILLEGALARGUMENTEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/lang/IllegalArgumentException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace lang {

inline IllegalArgumentException::IllegalArgumentException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , ArgumentPosition(0)
{ }

inline IllegalArgumentException::IllegalArgumentException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::sal_Int16& ArgumentPosition_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , ArgumentPosition(ArgumentPosition_)
{ }

IllegalArgumentException::IllegalArgumentException(IllegalArgumentException const & the_other): ::com::sun::star::uno::Exception(the_other), ArgumentPosition(the_other.ArgumentPosition) {}

IllegalArgumentException::~IllegalArgumentException() {}

IllegalArgumentException & IllegalArgumentException::operator =(IllegalArgumentException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    ArgumentPosition = the_other.ArgumentPosition;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace lang {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::lang::IllegalArgumentException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_short = ::cppu::UnoType< ::sal_Int16 >::get();
        aMemberRefs[0] = rMemberType_short.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.lang.IllegalArgumentException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::lang::IllegalArgumentException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::lang::IllegalArgumentException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LANG_ILLEGALARGUMENTEXCEPTION_HPP
