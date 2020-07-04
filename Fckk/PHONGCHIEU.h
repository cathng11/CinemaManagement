#pragma once
#include <iostream>
using namespace std;

class PHONGCHIEU
{
protected:
	char MSPhong[50];
	char TenPhong[50];
	int SoLuongGhe;
public:
	PHONGCHIEU();
	PHONGCHIEU(char* _MSPhong, char* _TenPhong, int _SoLuongGhe);
	PHONGCHIEU(char* _MSPhong);
	~PHONGCHIEU();
	virtual void scanpc();
	virtual void print();
	friend istream& operator>>(istream&, PHONGCHIEU&);
	friend ostream& operator<<(ostream&, const PHONGCHIEU&);
	char* getMSPhong();
	char* getTenPhong();
	int getSoLuongGhe();


};