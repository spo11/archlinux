#ifndef INCLUDED_COM_SUN_STAR_FRAME_CONTROLCOMMAND_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_CONTROLCOMMAND_HPP

#include "sal/config.h"

#include "com/sun/star/frame/ControlCommand.hdl"

#include "com/sun/star/beans/NamedValue.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame {

inline ControlCommand::ControlCommand() SAL_THROW( () )
    : Command()
    , Arguments()
{
}

inline ControlCommand::ControlCommand(const ::rtl::OUString& Command_, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::NamedValue >& Arguments_) SAL_THROW( () )
    : Command(Command_)
    , Arguments(Arguments_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace frame {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::ControlCommand const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::beans::NamedValue > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.ControlCommand", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::ControlCommand const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::ControlCommand >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_CONTROLCOMMAND_HPP
