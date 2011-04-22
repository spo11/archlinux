#ifndef INCLUDED_COM_SUN_STAR_EMBED_STORAGEWRAPPEDTARGETEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_STORAGEWRAPPEDTARGETEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/embed/StorageWrappedTargetException.hdl"

#include "com/sun/star/lang/WrappedTargetException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace embed {

inline StorageWrappedTargetException::StorageWrappedTargetException() SAL_THROW( () )
    : ::com::sun::star::lang::WrappedTargetException()
{ }

inline StorageWrappedTargetException::StorageWrappedTargetException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& TargetException_) SAL_THROW( () )
    : ::com::sun::star::lang::WrappedTargetException(Message_, Context_, TargetException_)
{ }

StorageWrappedTargetException::StorageWrappedTargetException(StorageWrappedTargetException const & the_other): ::com::sun::star::lang::WrappedTargetException(the_other) {}

StorageWrappedTargetException::~StorageWrappedTargetException() {}

StorageWrappedTargetException & StorageWrappedTargetException::operator =(StorageWrappedTargetException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::lang::WrappedTargetException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::StorageWrappedTargetException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::lang::WrappedTargetException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.embed.StorageWrappedTargetException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::embed::StorageWrappedTargetException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::embed::StorageWrappedTargetException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_STORAGEWRAPPEDTARGETEXCEPTION_HPP
