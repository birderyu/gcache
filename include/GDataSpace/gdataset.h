#pragma once

#include "GCore/gobject.h"

namespace gcache {
	class GDataGroup;
	class GDataObject;
}

namespace gcache {

enum G_INDEX_TYPE
{

};

class GAPI GDataSet
	: virtual public GObject
{
public:
	virtual ~GDataSet();

public:
	gint GetObjectType() const;
	GDataGroup *GetDataGroup() const;
	GDataObject GetDataObject(gint object_id) const;

public: // Getter
	gvoid GetValue(gsize row_id, gsize column_id, gint &value) const;
	gvoid GetValue(gsize row, const GString &field_name, gint &value) const;

public: // 数据检索
	gbool BuildIndexAt(gsize column_id, G_INDEX_TYPE index_type);
	gbool BuildIndex(const GString &field_name, G_INDEX_TYPE index_type);
	gvoid Search() const;

public: // 数据编辑
	gbool Editable() const;
	gvoid StartEdit(gbool redo_undo = true);
	gvoid SaveEdit();
	gvoid StopEdit(gbool save = true);

	gbool EditAdd();
	gbool EditUpdate();
	gbool EditDelete();

public: // 数据加载
	gbool LoadAdd();
	gbool LoadUpdate();
	gbool LoadDelete();

protected:
	GDataSet(GDataGroup *data_group = GNULL);

private:
	GDataGroup *m_pDataGroup;
};

}