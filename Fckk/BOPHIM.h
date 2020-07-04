#pragma once
#include <iostream>
using namespace std;
class BOPHIM
{
protected:
	char   MSPhim[50];
	char   TenPhim[50];
	char   TheLoaiPhim[50];
	int    ThoiLuongPhim;
	char   DinhDangPhim[50];
	char   TrangThaiPhim[50];
public:
	BOPHIM();
	BOPHIM(char* id, char* tp, char* tl, int tlp, char* dd , char* tt);
	BOPHIM(char* id);
	~BOPHIM();
	void scanbp();
	void print();
	friend ostream& operator<<(ostream&, const BOPHIM&);
	friend istream& operator>>(istream&, BOPHIM&);
	char* getMSPhim();
	char* getTenPhim();
	char* getTheLoaiPhim();
	int getThoiLuongPhim();
	char* getDinhDangPhim();
	char* getTrangThaiPhim();

};