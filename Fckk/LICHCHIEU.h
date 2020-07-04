#pragma once
#include"BOPHIM.h"
#include"PHONGCHIEU.h"
#include"Date.h"
#include"Time.h"
#include<iostream>
using namespace std;
class LICHCHIEU : public virtual PHONGCHIEU, public virtual BOPHIM
{
protected:
	char MSLich[50];
	Date NgayChieuPhim;
	Time GioChieuPhim;
public:
	LICHCHIEU();
	LICHCHIEU(char* _MSLich, PHONGCHIEU, BOPHIM, Date d, Time t);
	LICHCHIEU(char* _MSLich);
	~LICHCHIEU();
	void scanlc();
	void print();
	friend ostream& operator<<(ostream&, const LICHCHIEU&);
	friend istream& operator>>(istream&, LICHCHIEU&);
	char* getMSLich();
	Date getNgayChieuPhim();
	Time getGioChieuPhim();
};