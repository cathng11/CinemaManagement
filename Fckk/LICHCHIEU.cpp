#include "LICHCHIEU.h"
#include <iostream>
#include <iomanip>
using namespace std;
LICHCHIEU::LICHCHIEU()
{
	strcpy_s(MSLich, "");

	this->NgayChieuPhim = NgayChieuPhim;
	this->GioChieuPhim = GioChieuPhim;
}

LICHCHIEU::LICHCHIEU(char* _MSLich, PHONGCHIEU pc, BOPHIM bp, Date nc, Time gc)
	:PHONGCHIEU(pc), BOPHIM(bp), NgayChieuPhim(nc), GioChieuPhim(gc)
{
	strcpy_s(MSLich, 50, _MSLich);
}

LICHCHIEU::LICHCHIEU(char* _MSLich)
{
	strcpy_s(MSLich, 50, _MSLich);
	this->NgayChieuPhim = NgayChieuPhim;
	this->GioChieuPhim = GioChieuPhim;

}

LICHCHIEU::~LICHCHIEU()
{
}

void LICHCHIEU::scanlc()
{
	cin.ignore();
	cout << "\n" << endl; cout << "\t\t\t\t\t\t\t";
	cout << "->Thong Tin Lich Chieu:" << endl;
	cout << "\n" << endl;
	cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Ma So Lich         : "; fflush(stdin);
	cin.getline(MSLich, 50); cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Ma So Phong        : "; fflush(stdin);
	cin.getline(MSPhong, 50); cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Ma So Phim         : "; fflush(stdin);
	cin.getline(MSPhim, 50); cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Ngay Chieu phim    : "; fflush(stdin);
	cin >> NgayChieuPhim; cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Gio Chieu Phim     : "; fflush(stdin);
	cin >> GioChieuPhim;
	cout << "\n\n" << endl;

}

void LICHCHIEU::print()
{


	cout << "\t\t\t\t\t\t\t";
	cout << "|" << setfill(' ') << left << setw(20) << MSLich;
	cout << setfill(' ') << left << setw(20) << MSPhong;
	cout << setfill(' ') << left << setw(20) << MSPhim;
	cout << setfill(' ') << left << setw(18) << NgayChieuPhim << "\t\t\t";
	cout << setfill(' ') << left << setw(18) << GioChieuPhim << "|" << endl;

}
char* LICHCHIEU::getMSLich()
{
	return MSLich;
}
Date LICHCHIEU::getNgayChieuPhim()
{
	return NgayChieuPhim;
}
Time LICHCHIEU::getGioChieuPhim()
{
	return GioChieuPhim;
}


ostream& operator<<(ostream& out, const LICHCHIEU& lc)
{
	out << lc.MSLich << endl;
	return out;
}

istream& operator>>(istream& in, LICHCHIEU& lc)
{
	cout << "MaSoLich: ";
	in >> lc.MSLich;
	cout << "NgayChieuPhim: ";
	in >> lc.NgayChieuPhim;
	cout << "GioChieuPhim";
	in >> lc.GioChieuPhim;
	return in;
}