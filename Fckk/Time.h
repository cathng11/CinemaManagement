#pragma once
#include <iostream>
#include <string>
using namespace std;
class Time
{
protected:
	int Hour;
	int Minute;
	int Second;
public:
	Time();
	Time(int, int, int);
	~Time();
	void setTime(int, int, int);
	void printTime();
	friend ostream& operator<<(ostream&, const Time&);
	friend istream& operator>>(istream&, Time&);
	int getHour();
	int getMinute();
	int getSecond();
};