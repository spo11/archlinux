#ifndef INCLUDED_COM_SUN_STAR_CONTAINER_NOSUCHELEMENTEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_CONTAINER_NOSUCHELEMENTEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/container/NoSuchElementException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace container {

inline NoSuchElementException::NoSuchElementException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
{ }

inline NoSuchElementException::NoSuchElementException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
{ }

NoSuchElementException::NoSuchElementException(NoSuchElementException const & the_other): ::com::sun::star::uno::Exception(the_other) {}

NoSuchElementException::~NoSuchElementException() {}

NoSuchElementException & NoSuchElementException::operator =(NoSuchElementException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace container {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::container::NoSuchElementException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.container.NoSuchElementException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::container::NoSuchElementException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::container::NoSuchElementException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CONTAINER_NOSUCHELEMENTEXCEPTION_HPP
