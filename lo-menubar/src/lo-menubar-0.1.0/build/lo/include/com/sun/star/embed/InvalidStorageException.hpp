#ifndef INCLUDED_COM_SUN_STAR_EMBED_INVALIDSTORAGEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_INVALIDSTORAGEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/embed/InvalidStorageException.hdl"

#include "com/sun/star/io/IOException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace embed {

inline InvalidStorageException::InvalidStorageException() SAL_THROW( () )
    : ::com::sun::star::io::IOException()
{ }

inline InvalidStorageException::InvalidStorageException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::io::IOException(Message_, Context_)
{ }

InvalidStorageException::InvalidStorageException(InvalidStorageException const & the_other): ::com::sun::star::io::IOException(the_other) {}

InvalidStorageException::~InvalidStorageException() {}

InvalidStorageException & InvalidStorageException::operator =(InvalidStorageException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::io::IOException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::InvalidStorageException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::io::IOException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.embed.InvalidStorageException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::embed::InvalidStorageException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::embed::InvalidStorageException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_INVALIDSTORAGEEXCEPTION_HPP
