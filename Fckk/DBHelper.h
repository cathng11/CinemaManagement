#pragma once

#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include "PHONGCHIEU.h"
#include "BOPHIM.h"
#include "LICHCHIEU.h"
#include "VEPHIM.h"

class DBHelper
{
#define SQL_RESULT_LEN 240
#define SQL_RETURN_CODE_LEN 1000

	SQLHANDLE sqlConnHandle;
	SQLHANDLE sqlStmtHandle;
	SQLHANDLE sqlEnvHandle;
	SQLCHAR retconstring[SQL_RETURN_CODE_LEN];
public:
	int count;
public:
	void init();
	PHONGCHIEU* getpc(int& countpc);
	BOPHIM* getbp(int &countbp);
	LICHCHIEU* getlc(int &countlc);
	VEPHIM* getvp(int &countvp);
	void ExecuteQuery(char s[]);
	void close();
};
