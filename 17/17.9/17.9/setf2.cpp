#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	cout.setf(ios_base::left, ios_base::adjustfield);
	cout.setf(ios_base::showpoint);
	cout.setf(ios_base::showpos);
	cout.precision(3);
	ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);

	cout << "wyrownanie do lewej:\n";
	long n;
	for (n = 1;  n <= 41 ; n+=10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}

	cout.setf(ios_base::internal, ios_base::adjustfield);
	cout.setf(old, ios_base::floatfield);
	cout << "Wyrownanie wewnetrzne:\n";
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}

	cout.setf(ios_base::right, ios_base::adjustfield);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Wyrownanie do prawej:\n";
	for (n = 1; n <= 41; n += 10)
	{
		cout.width(4);
		cout << n << "|";
		cout.width(12);
		cout << sqrt(double(n)) << "|\n";
	}
	return 0;
}