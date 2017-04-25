#pragma once

#include "GCore/gobject.h"

namespace gcache {
	class GDataSet;
}

namespace gcache {

class GAPI GDataGroup
	: virtual public GObject
{
public:

	GDataSet *GetSet(gint object_type);
};

}