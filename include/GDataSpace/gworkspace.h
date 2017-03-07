#pragma once

#include "GCore/gobject.h"

class GDataSet;

class GAPI GWorkSpace
	: virtual public GObject
{
public:
	gvoid StartEdit(gbool redo_undo = true);
	gvoid StopEdit(gbool save = true);
};