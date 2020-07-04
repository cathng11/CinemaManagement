#pragma once
#include <iostream>
using namespace std;
class Date
{
protected:
	int Year;
	int Month;
	int Day;
public:
	Date();
	Date(int, int, int);
	~Date();
	void setDate(int, int, int);
	void printDate();
	friend ostream& operator<<(ostream&, const Date&);
	friend istream& operator>>(istream&, Date&);
	int getYear();
	int getMonth();
	int getDay();
};