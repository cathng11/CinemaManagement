#include "PHONGCHIEU.h"
#include <iostream>
#include <string>
#include <iomanip>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

PHONGCHIEU::PHONGCHIEU()
{
	strcpy_s(MSPhong, "");
	strcpy_s(TenPhong, "");
	SoLuongGhe = 0;
}

PHONGCHIEU::PHONGCHIEU(char* _MSPhong, char* _TenPhong, int _SoLuongGhe)
{
	strcpy_s(MSPhong, 50, _MSPhong);
	strcpy_s(TenPhong, 50, _TenPhong);
	SoLuongGhe=_SoLuongGhe;
}

PHONGCHIEU::PHONGCHIEU(char* _MSPhong)
{
	strcpy_s(MSPhong, 50, _MSPhong);
	strcpy_s(TenPhong, "");
	SoLuongGhe = 0;
}

PHONGCHIEU::~PHONGCHIEU()
{
}

void PHONGCHIEU::scanpc()
{
	cin.ignore();
	cout << "\n" << endl;
	cout << "\t\t\t\t\t\t\t";
	cout << "-> Thong tin Phong chieu:" << endl;
	cout << "\n" << endl; cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Ma So Phong   : ";
	fflush(stdin); cin.getline(MSPhong, 50); cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Ten Phong     : ";
	fflush(stdin); cin.getline(TenPhong, 50); cout << "\t\t\t\t\t\t\t";
	do {
		cout << "\t\t\tNhap So Luong Ghe  : ";
		fflush(stdin); cin >> SoLuongGhe;
	} while (SoLuongGhe <= 0);
	cout << "\n\n" << endl;


}

void PHONGCHIEU::print()
{
	cout << "\t\t\t\t\t\t\t\t\t";
	cout << "|" << setfill(' ') << setw(20) << MSPhong;
	cout << setfill(' ') << setw(20) << TenPhong;
	cout << setfill(' ') << setw(20) << SoLuongGhe << "|" << endl;
}


char* PHONGCHIEU::getMSPhong()
{
	return MSPhong;
}

char* PHONGCHIEU::getTenPhong()
{
	return TenPhong;
}

int PHONGCHIEU::getSoLuongGhe()
{
	return SoLuongGhe;
}

ostream& operator<<(ostream& out, const PHONGCHIEU& pc)
{
	out << pc.MSPhong << pc.TenPhong << pc.SoLuongGhe << endl;
	return out;
}

istream& operator>>(istream& in, PHONGCHIEU& pc)
{
	
	in >> pc.MSPhong;
	cout << "\n";

	in >> pc.TenPhong;
	cout << "\n";

	in >> pc.SoLuongGhe;
	cout << "\n";

	return in;
}

