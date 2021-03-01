#include <iostream>
#include "D:\Projekty\14\14.13-14\stacktp.h"

template <template <typename T> class Thing>
class Crab
{
private:
	Thing<int> s1;
	Thing<double> s2;
public:
	Crab() {}
	bool push(int a, double x) { return s1.push(a) && s2.push(x); }
	bool pop(int& a, double& x) { return s1.pop(a) && s2.pop(x); }
};

int main()
{
	using std::cin;
	using std::endl;
	using std::cout;

	Crab<Stack> nebula;
	int ni;
	double nb;
	cout << "Podaj pary int double w postaci 4 3.5 (0 0 konczy wpisywanie):\n";
	while (cin>> ni >> nb && ni > 0 && nb > 0)
	{
		if (!nebula.push(ni, nb))
			break;
	}
	while (nebula.pop(ni, nb))
		cout << ni << ", " << nb << endl;
	cout << "Koniec.\n";
	return 0;
}