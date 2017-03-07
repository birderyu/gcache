#pragma once

#include "GCore/gobject.h"

class GDataSet;

class GAPI GDataGroup
	: virtual public GObject
{
public:

	GDataSet *GetSet(gint object_type);
};