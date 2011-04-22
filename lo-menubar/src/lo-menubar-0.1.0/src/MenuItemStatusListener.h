#ifndef __MENU_ITEM_STATUS_LISTENER_H__
#define __MENU_ITEM_STATUS_LISTENER_H__

#include "FrameHelper.h"

#include <glib.h>

#include <com/sun/star/frame/XStatusListener.hpp>
#include <cppuhelper/implbase1.hxx>

#include <rtl/process.h>

using com::sun::star::frame::FeatureStateEvent;
using com::sun::star::frame::XStatusListener;
using com::sun::star::lang::EventObject;

// This class listens for changes in each menuitem and notifies FrameHelper about it
class MenuItemStatusListener : public cppu::WeakImplHelper1 < XStatusListener >
{
  private:
	guint16 id;
	FrameHelper *helper;	

  public:
	MenuItemStatusListener (FrameHelper *helper);
	~MenuItemStatusListener () {}

	virtual void SAL_CALL
	statusChanged(const FeatureStateEvent& Event)
	  throw (RuntimeException);

	virtual void SAL_CALL disposing(const EventObject& aEvent)
	  throw (RuntimeException) {}
};
#endif
