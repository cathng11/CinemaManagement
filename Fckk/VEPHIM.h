#pragma once
#include"PHONGCHIEU.h"
#include"BOPHIM.h"
#include"LICHCHIEU.h"
#include <iostream>
using namespace std;

class VEPHIM : public  virtual LICHCHIEU
{
protected:
	char MSGhe[50];
	char DinhDangVe[50];
	char LoaiVe[50];
	int GiaVe;
public:
	VEPHIM();
	VEPHIM(char* _MSGhe, LICHCHIEU,char* _DinhDangVe, char* _LoaiVe, int _GiaVe);
	~VEPHIM();
	void scanvp();
	void print();
	friend ostream& operator<<(ostream&, const VEPHIM&);
	friend istream& operator>>(istream&, VEPHIM&);
	char* getMSGhe();
	char* getDinhDangVe();
	char* getLoaiVe();
	int getGiaVe();
};