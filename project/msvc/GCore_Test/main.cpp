#include "gstring.h"
#include <iostream>
#include "BTree_Test.h"
#include "Sort_Test.h"
#include "MemPool_Test.h"


#include "gstringlist.h"
#include "gvariety.h"
#include "gmemorypool.h"
#include "gpackage.h"
#include "Bytes_Test.h"
#include "gsinglelinkedlist.h"
#include "gmutex.h"
#include "gvoidlock.h"
#include "gnew.h"

#include "gblock.h"
#include "gcstringhelper.h"
#include "List_Test.h"
#include "gnumber.h"
#include "Hash_Test.h"

#include "gsharedpointer.h"

#include "gstringlist.h"
#include "gstaticarray.h"
#include "gsingleton.h"
#include "gbinaryheap.h"

#include "Array_Test.h"
#include "Vector_Test.h"
#include "File_Test.h"
#include "Map_Test.h"
#include "Set_Test.h"

#include "json_test.h"
#include "gcriticalsection.h"
#include "guniquepointer.h"

#include "Atom_Test.h"
#include "Traits_Test.h"

#include "gallocator.h"
#include "gconstructor.h"
#include "gseries.h"
#include "gbytes.h"
#include "gvariety.h"
#include "gvariant_example.h"

#include "variant.h"

#include "gmemorypool_example.h"
#include "garray_example.h"
#include <time.h>
#include "gstopwatch.h"

#include "gthread_example.h"

#include "gtuple_example.h"
#include "gdatetime_example.h"
#include "gtable_example.h"

#include "gdynamictable.h"

#include<stdio.h>
#include<string.h>
//声明一个函数，其作用是在指定的长度终止字符串 
void fit(char * str, int n);
int main(void)
{
	//数组 n1[] 
	char n1[] = "1234567890";
	//一个指向字符串“ 1234567890 ”的指针 
	char * n2 = "1234567890";
	fit(n1, 5);
	fit(n2, 5);
	//经过验证 n1 是可以正常输出的， n2 不可以 
	printf("n1 = %s\nn2 = %s/n", n1, n2);
	return 0;
}

void fit(char * str, int n)
{
	if (strlen(str) > n)
		*(str + n) = '\0';
}

int main_1(int argc, char *argv[])
{
	GDynamicTableRow<gint, gdouble, GString> row;
	for (gsize i = 0; i < 3; i++)
	{
		std::cout << GDynamicTableRow<gint, gdouble, GString>::m_type_cursor[i] << std::endl;
	}
	StaticTable_Test();
	Tuple_Test();
	Time_Test();

	GDateTime dt = GDateTime::Now();
	GString sdt = dt.ToString();

	system("pause");
	return 0;
}