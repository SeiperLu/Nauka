#pragma once
#pragma once
#ifndef WINOCW14_2_H_
#define WINOCW14_2_H_
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

class Wine : private std::string, private Pair < std::valarray<int>, std::valarray<int> >
{
public: 
	Wine() : std::string("Brak"), years(0) {}
	Wine(const char* l, int y, const int yr[], const int bot[]) : std::string(l), years(y)
	{
		PairArray::first().resize(years);
		PairArray::second().resize(years);
		for (int i = 0; i < years; i++)
		{
			PairArray::first()[i] = yr[i];
			PairArray::second()[i] = bot[i];
		}
	}
	Wine(const char* l, int y) : std::string(l), years(y)
	{
		PairArray::first().resize(years);
		PairArray::second().resize(years);
	}
	void GetBottles();
	const std::string& Label() const;
	int sum() const;
	void Show() const;
private:
	int years;
	typedef Pair<std::valarray<int>, std::valarray<int>> PairArray;
};

#endif // !WINOCW14_1_H_
