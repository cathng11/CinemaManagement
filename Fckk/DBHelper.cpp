#include "DBHelper.h"
#include "DBHelper.h"
#include "PHONGCHIEU.h"
#include "BOPHIM.h"
#include "LICHCHIEU.h"
#include "VEPHIM.h"
#include <iostream>
#include <string>
#pragma comment(linker, "/STACK:42")
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#pragma warning(disable: 4101)


void DBHelper::init()
{

	sqlConnHandle = NULL;
	sqlStmtHandle = NULL;

	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle))
		close();

	if (SQL_SUCCESS != SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
		close();

	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle))
		close();

	cout << "\t\t\t\t\t\t\t";
	cout << "Please wait for seconds...";
	cout << "\n";


	switch (SQLDriverConnect(sqlConnHandle,
		NULL,
		(SQLCHAR*)"DRIVER={SQL Server};SERVER=DESKTOP-07HRTS2;DATABASE=dbRapChieuPhim;Trusted=true",
		SQL_NTS,
		retconstring,
		1000,
		NULL,
		SQL_DRIVER_NOPROMPT)) {

	case SQL_SUCCESS:

		break;

	case SQL_SUCCESS_WITH_INFO:

		break;

	case SQL_INVALID_HANDLE:
		cout << "Could not connect to SQL Server ";
		cout << "\n";
		close();
		break;

	case SQL_ERROR:
		cout << "Could not connect to SQL Server";
		cout << "\n";
		close();
		break;

	default:
		break;
	}

	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle))
		close();

}


PHONGCHIEU* DBHelper::getpc(int& countpc)
{
	this->count = countpc;
	PHONGCHIEU* pc = new PHONGCHIEU[15];
	int i = 0;
	countpc = 0;

	cout << "\n";
	cout << "\t\t\t\t\t\t\t";
	cout << "Please wait to show database..."<<endl;
	cout << "\n\n";

	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLCHAR*)"SELECT * FROM PHONGCHIEU", SQL_NTS)) {
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {


		SQLCHAR sqlVersion[SQL_RESULT_LEN];
		SQLINTEGER ptrSqlVersion;
		char MSPhong[50];
		char TenPhong[50];
		int SoLuongGhe;

		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS)
		{

			SQLGetData(sqlStmtHandle, 1, SQL_CHAR, MSPhong, 50, NULL);
			SQLGetData(sqlStmtHandle, 2, SQL_CHAR, TenPhong, 50, NULL);
			SQLGetData(sqlStmtHandle, 3, SQL_INTEGER, &SoLuongGhe, 20, NULL);




			pc[i] = PHONGCHIEU(MSPhong, TenPhong, SoLuongGhe);
			i++;
			countpc++;
		}
	}
	return pc;
}


BOPHIM* DBHelper::getbp(int& countbp)
{
	this->count = countbp;
	BOPHIM* bp = new BOPHIM[15];
	int i = 0;
	countbp = 0;

	cout << "\n";
	cout << "\t\t\t\t\t\t\t";
	cout << "Please wait to show database..." << endl;
	cout << "\n";

	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLCHAR*)"SELECT * FROM BOPHIM", SQL_NTS)) {
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {


		SQLCHAR sqlVersion[SQL_RESULT_LEN];
		SQLINTEGER ptrSqlVersion;
		char MSPhim[50];
		char TenPhim[50];
		char TheLoaiPhim[50];
		int ThoiLuongPhim;
		char DinhDangPhim[50];
		char TrangThaiPhim[50];

		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS)
		{

			SQLGetData(sqlStmtHandle, 1, SQL_CHAR, MSPhim, 50, NULL);
			SQLGetData(sqlStmtHandle, 2, SQL_CHAR, TenPhim, 50, NULL);
			SQLGetData(sqlStmtHandle, 3, SQL_CHAR, TheLoaiPhim, 50, NULL);
			SQLGetData(sqlStmtHandle, 4, SQL_INTEGER, &ThoiLuongPhim, 50, NULL);
			SQLGetData(sqlStmtHandle, 5, SQL_CHAR, DinhDangPhim, 50, NULL);
			SQLGetData(sqlStmtHandle, 6, SQL_CHAR, TrangThaiPhim, 50, NULL);




			bp[i] = BOPHIM(MSPhim, TenPhim, TheLoaiPhim, ThoiLuongPhim, DinhDangPhim, TrangThaiPhim);
			i++;
			countbp++;
		}
	}
	return bp;
}


LICHCHIEU* DBHelper::getlc(int& countlc)
{
	this->count = countlc;
	LICHCHIEU* lc = new LICHCHIEU[30];
	int i = 0;
	countlc = 0;

	cout << "\n";
	cout << "\t\t\t\t\t\t\t";
	cout << "Please wait to show database..." << endl;
	cout << "\n";

	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLCHAR*)"SELECT * FROM LICHCHIEU", SQL_NTS)) {
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {


		SQLCHAR sqlVersion[SQL_RESULT_LEN];
		SQLDATE ptrSqlVersion;
		char MSLich[50];
		char MSPhong[50];
		char MSPhim[50];
		char NgayChieuPhim[50] = { 0 };
		char GioChieuPhim[50] = { 0 };

		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS)
		{

			SQLGetData(sqlStmtHandle, 1, SQL_CHAR, MSLich, 50, NULL);
			SQLGetData(sqlStmtHandle, 2, SQL_CHAR, MSPhong, 50, NULL);
			SQLGetData(sqlStmtHandle, 3, SQL_CHAR, MSPhim, 50, NULL);
			SQLGetData(sqlStmtHandle, 4, SQL_CHAR, NgayChieuPhim, 20, NULL);
			SQLGetData(sqlStmtHandle, 5, SQL_CHAR, GioChieuPhim, 20, NULL);



			int year, month, day;
			sscanf_s(NgayChieuPhim, "%4d%*c%2d%*c%2d", &year, &month, &day);
			Date NgayCP(year, month, day);

			int hour, minute, second;
			sscanf_s(GioChieuPhim, "%2d%*c%2d%*c%d", &hour, &minute, &second);
			Time GioCP(hour, minute, second);

			PHONGCHIEU PC(MSPhong);
			BOPHIM BP(MSPhim);

			*(lc + i) = LICHCHIEU(MSLich, MSPhong, MSPhim, NgayCP, GioCP);
			i++;
			countlc++;
		}
	}
	return lc;
}


VEPHIM* DBHelper::getvp(int& countvp)
{
	this->count = countvp;
	VEPHIM* vp = new VEPHIM[30];
	int i = 0;
	countvp = 0;

	cout << "\n";
	cout << "\t\t\t\t\t\t\t";
	cout << "Please wait to show database..." << endl;
	cout << "\n";

	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLCHAR*)"SELECT * FROM VEPHIM", SQL_NTS)) {
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {


		SQLCHAR sqlVersion[SQL_RESULT_LEN];
		SQLINTEGER ptrSqlVersion;

		char MSGhe[50];
		char MSLich[50];
		char DinhDangVe[50];
		char LoaiVe[50];
		int GiaVe;

		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS)
		{
			SQLGetData(sqlStmtHandle, 1, SQL_CHAR, MSGhe, 20, NULL);
			SQLGetData(sqlStmtHandle, 2, SQL_CHAR, MSLich, 20, NULL);
			SQLGetData(sqlStmtHandle, 3, SQL_CHAR, DinhDangVe, 20, NULL);
			SQLGetData(sqlStmtHandle, 4, SQL_CHAR, LoaiVe, 20, NULL);
			SQLGetData(sqlStmtHandle, 5, SQL_INTEGER, &GiaVe, 20, NULL);

			LICHCHIEU LC(MSLich);

			vp[i] = VEPHIM(MSGhe, MSLich, DinhDangVe, LoaiVe, GiaVe);
			i++;
			countvp++;
		}
	}
	return vp;
}


void DBHelper::ExecuteQuery(char s[])
{
	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle)) return;
	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLCHAR*)s, SQL_NTS)) { cout << endl; }
	else
	{
		cout << endl;
	}

}


void DBHelper::close()
{
	SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
	SQLDisconnect(sqlConnHandle);
	SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
	SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);
}