#include "Date.h"
#include <iostream>
#include <iomanip>
using namespace std;
Date::Date()
{
	Year = 1990;
	Month = 1;
	Day = 1;
}

Date::Date(int y, int m, int d) :
	Year(y), Month(m), Day(d)
{
}

Date::~Date()
{
}

void Date::setDate(int y, int m, int d)
{
	Year = (y >= 1990 && y < 2050) ? y : 1990;
	Month = (m >= 1 && m <= 12) ? m : 1;
	Day = (d >= 1 && d <= 31) ? d : 1;

}

void Date::printDate()
{
	cout << Year << "-" << Month << "-" << Day << endl;
}

int Date::getYear()
{
	return Year;
}

int Date::getMonth()
{
	return Month;
}

int Date::getDay()
{
	return Day;
}

ostream& operator<<(ostream& out, const Date& date)
{
	out << setfill('0') << right << setw(4) << date.Year << "-";
	out << setfill('0') << right << setw(2) << date.Month << "-";
	out << setfill('0') << right << setw(2) << date.Day;
	return out;
}

istream& operator>>(istream& in, Date& date)
{
	cout << endl;
	do
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t";
		cout << "Day  : ";
		in >> date.Day;
	} while (date.Day < 0 && date.Day > 32);
	do
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t";
		cout << "Month: ";
		in >> date.Month;
	} while (date.Month < 0 && date.Month > 13);
	do
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t";
		cout << "Year : ";
		in >> date.Year;
	} while (date.Year < 0 && date.Year > 3000);
	return in;
}