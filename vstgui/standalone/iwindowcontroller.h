#pragma once

#include "iwindowlistener.h"

//------------------------------------------------------------------------
namespace VSTGUI {
namespace Standalone {

//------------------------------------------------------------------------
class IWindowController : public IWindowListener
{
public:
	virtual CPoint constraintSize (const IWindow& window, const CPoint& newSize) = 0;
	virtual bool canClose (const IWindow& window) const = 0;
};

//------------------------------------------------------------------------
} // Standalone
} // VSTGUI
