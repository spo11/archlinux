#ifndef INCLUDED_COM_SUN_STAR_REGISTRY_REGISTRYVALUETYPE_HPP
#define INCLUDED_COM_SUN_STAR_REGISTRY_REGISTRYVALUETYPE_HPP

#include "sal/config.h"

#include "com/sun/star/registry/RegistryValueType.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace registry {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::registry::RegistryValueType const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.registry.RegistryValueType",
                                       ::com::sun::star::registry::RegistryValueType_NOT_DEFINED );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::registry::RegistryValueType const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::registry::RegistryValueType >::get();
}

#endif // INCLUDED_COM_SUN_STAR_REGISTRY_REGISTRYVALUETYPE_HPP
