#include "BOPHIM.h"
#include <iostream>
#include <iomanip>
using namespace std;

BOPHIM::BOPHIM()
{
	strcpy_s(MSPhim, "");
	strcpy_s(TenPhim, "");
	strcpy_s(TheLoaiPhim, "");
	this->ThoiLuongPhim = 0;
	strcpy_s(DinhDangPhim, "");
	strcpy_s(TrangThaiPhim, "");
}

BOPHIM::BOPHIM(char* id, char* tp, char* tl, int tlp, char* dd, char* tt)
{
	strcpy_s(MSPhim, 50, id);
	strcpy_s(TenPhim, 50, tp);
	strcpy_s(TheLoaiPhim, 50, tl);
	this->ThoiLuongPhim = tlp;
	strcpy_s(DinhDangPhim, 50, tt);
	strcpy_s(TrangThaiPhim, 50, dd);
}

BOPHIM::BOPHIM(char* id)
{
	strcpy_s(MSPhim, 50, id);
	strcpy_s(TenPhim, " ");
	strcpy_s(TheLoaiPhim, " ");
	this->ThoiLuongPhim = 0;
	strcpy_s(DinhDangPhim, " ");
	strcpy_s(TrangThaiPhim, " ");

}

BOPHIM::~BOPHIM()
{
}

void BOPHIM::scanbp()
{
	cin.ignore();
	cout << "\n" << endl; cout << "\t\t\t\t\t\t\t";
	cout << "->Thong Tin Bo Phim: " << endl;
	cout << "\n" << endl;
	cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Ma so phim         : "; fflush(stdin);
	cin.getline(MSPhim, 50); cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Ten Phim           : "; fflush(stdin);
	cin.getline(TenPhim, 50); cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap The Loai           : "; fflush(stdin);
	cin.getline(TheLoaiPhim, 50);
	do {
		cout << "\t\t\t\t\t\t\t";
		cout << "\t\t\tNhap Thoi Luong Phim    : "; fflush(stdin);
		cin >> ThoiLuongPhim;
	} while (ThoiLuongPhim <= 0);
	cin.ignore(); cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Dinh Dang Phim     : "; fflush(stdin);
	cin.getline(DinhDangPhim, 50); cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Trang Thai Phim    : "; fflush(stdin);
	cin.getline(TrangThaiPhim, 50);
	cout << "\n\n" << endl;
}

void BOPHIM::print()
{
	cout << "\t\t\t\t\t";
	cout << "|" << setfill(' ') << left << setw(20) << MSPhim;
	cout << setfill(' ') << left << setw(20) << TenPhim;
	cout << setfill(' ') << left << setw(30) << TheLoaiPhim;
	cout << setfill(' ') << setw(20) << ThoiLuongPhim;
	cout << setfill(' ') << setw(20) << TrangThaiPhim;
	cout << setfill(' ') << left << setw(20) << DinhDangPhim << "|" << endl;
}


char* BOPHIM::getMSPhim()
{
	return MSPhim;
}

char* BOPHIM::getTenPhim()
{
	return TenPhim;
}

char* BOPHIM::getTheLoaiPhim()
{
	return TheLoaiPhim;
}

int BOPHIM::getThoiLuongPhim()
{
	return ThoiLuongPhim;
}

char* BOPHIM::getDinhDangPhim()
{
	return DinhDangPhim;
}

char* BOPHIM::getTrangThaiPhim()
{
	return TrangThaiPhim;
}


ostream& operator<<(ostream& out, const BOPHIM& bp)
{
	out << bp.MSPhim  << bp.TenPhim  << bp.TheLoaiPhim  <<
		bp.ThoiLuongPhim  << bp.DinhDangPhim <<  bp.TrangThaiPhim << endl;
	return out;
}

istream& operator>>(istream& in, BOPHIM& bp)
{
	cout << "MaSoPhim:";
	in >> bp.MSPhim;
	cout << "TenPhim:";
	in >> bp.TenPhim;
	cout << "TheLoaiPhim:";
	in >> bp.TheLoaiPhim;
	cout << "ThoiLuongphim:";
	in >> bp.ThoiLuongPhim;
	cout << "DinhDangPhim: ";
	in >> bp.DinhDangPhim;
	cout << "TrangThaiPhim: ";
	in >> bp.TrangThaiPhim;
	return in;
}