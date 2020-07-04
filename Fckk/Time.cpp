#include "Time.h"
#include <iostream>
#include <iomanip>
using namespace std;
Time::Time()
{
	this->Hour = 0;
	this->Minute = 0;
	this->Second = 0;
}

Time::Time(int h, int m, int s) :
	Hour(h), Minute(m), Second(s)
{

}

Time::~Time()
{
}

void Time::setTime(int h, int m, int s)
{
	Hour = (h >= 0 && h < 24) ? h : 0;
	Minute = (m >= 0 && m < 60) ? m : 0;
	Second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printTime()
{
	cout << Hour << ":" << Minute << ":" << Second;
}

int Time::getHour()
{
	return Hour;
}

int Time::getMinute()
{
	return Minute;
}

int Time::getSecond()
{
	return Second;
}


ostream& operator<<(ostream& out, const Time& time)
{
	out << setfill('0') << right << setw(2) << time.Hour << ":";
	out << setfill('0') << right << setw(2) << time.Minute << ":";
	out << setfill('0') << right << setw(2) << time.Second;
	return out;
}

istream& operator>>(istream& in, Time& time)
{
	cout << endl;
	do
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t";
		cout << "Hour  : ";
		in >> time.Hour;
	} while (time.Hour <= 0 && time.Hour > 24);
	do
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t";
		cout << "Minute: ";
		in >> time.Minute;
	} while (time.Minute <= 0 && time.Minute > 59);
	do
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t";
		cout << "Second: ";
		in >> time.Second;
	} while (time.Second <= 0 && time.Second > 59);
	return in;
}