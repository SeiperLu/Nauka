#ifndef MYTIME_H_
#define MYTIME_H_


#pragma once
#include <iostream>

using std::ostream;

class Time
{
public:
	Time();
	Time(int h, int m = 0);

	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	friend Time operator+(const Time& t, const Time& k);
	friend Time operator-(const Time& t, const Time& k);
	friend Time operator*(const Time& t, double m);
	friend Time operator*(double m, const Time& t);
	friend ostream& operator<<(ostream& os, const Time& t);
private:
	int hours;
	int minutes;
};
#endif // !MYTIME_H_
#pragma once
