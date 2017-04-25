#pragma once

#include "GCore/gobject.h"

namespace gcache {
	class GDataSet;
}

namespace gcache {

class GAPI GWorkSpace
	: virtual public GObject
{
public:
	gvoid StartEdit(gbool redo_undo = true);
	gvoid StopEdit(gbool save = true);
};

}