#pragma once
#ifndef WINOCW14_1_H_
#define WINOCW14_1_H_
#include <string>
#include <valarray>

template<class T1, class T2>
class Pair
{
private:
	T1 a;
	T2 b;
public:
	T1& first();
	T2& second();
	T1 first() const { return a; }
	T1 second() const { return b; }
	Pair(const T1& aval, const T2& bval) : a(aval), b(bval) {}
	Pair() {}
};

template<class T1, class T2>
T1& Pair<T1, T2>::first()
{
	return a;
}

template<class T1, class T2>
T2& Pair<T1, T2>::second()
{
	return b;
}

class Wine
{
public:
	Wine() : label("Brak"), years(0) {}
	Wine(const char* l, int y, const int yr[], const int bot[]) : label(l), years(y) 
	{
		wines.first().resize(years);
		wines.second().resize(years);
		for (int i = 0; i < years; i++)
		{
			wines.first()[i] = yr[i];
			wines.second()[i] = bot[i];
		}
	}
	Wine(const char* l, int y) : label(l), years(y) 
	{
		wines.first().resize(years);
		wines.second().resize(years);
	}
	void GetBottles();
	const std::string& Label() const;
	int sum() const;
	void Show() const;
private:
	std::string label;
	int years;
	Pair<std::valarray<int>, std::valarray<int>> wines;
};

#endif // !WINOCW14_1_H_
