#include "VEPHIM.h"
#include <iomanip>
VEPHIM::VEPHIM()
{
	strcpy_s(MSGhe, "");
	strcpy_s(DinhDangVe, "");
	strcpy_s(LoaiVe, "");
	GiaVe=0;
}

VEPHIM::VEPHIM(char* _MSGhe, LICHCHIEU _MSLich, char* _DinhDangVe, char* _LoaiVe, int _GiaVe)
	:LICHCHIEU(_MSLich)
{
	strcpy_s(MSGhe, 50, _MSGhe);
	strcpy_s(DinhDangVe, 50, _DinhDangVe);
	strcpy_s(LoaiVe, 50, _LoaiVe);
	GiaVe = _GiaVe;
}

VEPHIM::~VEPHIM()
{
}

void VEPHIM::scanvp()
{
	cin.ignore();
	cout << "\n" << endl;
	cout << "\t\t\t\t\t\t\t";
	cout << "->Thong Tin Ve Phim: " << endl;
	cout << "\n" << endl; cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Ma So Ve     : "; fflush(stdin);
	cin.getline(MSGhe, 50); cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Ma So Lich    : "; fflush(stdin);
	cin.getline(MSLich, 50); cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Dinh Dang Ve  : "; fflush(stdin);
	cin.getline(DinhDangVe, 50); cout << "\t\t\t\t\t\t\t";
	cout << "\t\t\tNhap Loai Ve       : "; fflush(stdin);
	cin.getline(LoaiVe, 50); cout << "\t\t\t\t\t\t\t";
	do {
		cout << "\t\t\tNhap Gia Ve        : "; fflush(stdin);
		cin >> GiaVe;
	} while (GiaVe <= 0);
	cout << "\n\n" << endl;
}

void VEPHIM::print()
{
	cout << "\t\t\t\t\t\t\t";
	cout << "|" << setfill(' ') << left << setw(15) << MSGhe;
	cout << setfill(' ') << left << setw(20) << MSLich;
	cout << setfill(' ') << left << setw(15) << DinhDangVe;
	cout << setfill(' ') << left << setw(15) << LoaiVe;
	cout << setfill(' ') << right << setw(7) << GiaVe << "|" << endl;
}

char* VEPHIM::getMSGhe()
{
	return MSGhe;
}

char* VEPHIM::getDinhDangVe()
{
	return DinhDangVe;
}

char* VEPHIM::getLoaiVe()
{
	return LoaiVe;
}

int VEPHIM::getGiaVe()
{
	return GiaVe;
}

ostream& operator<<(ostream& out, const VEPHIM& ve)
{
	out << ve.MSGhe  << ve.DinhDangVe << ve.LoaiVe  << ve.GiaVe << endl;
	return out;
}

istream& operator>>(istream& in, VEPHIM& ve)
{
	cout << "MaSoGhe:";
	in >> ve.MSGhe;
	cout << "DinhDangVe: ";
	in >> ve.DinhDangVe;
	cout << "GiaVe: ";
	in >> ve.GiaVe;
	return in;
}