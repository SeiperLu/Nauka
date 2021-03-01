#include <iostream>
#include <cmath>
#include <string>
#include "D:\Projekty\15\15.10-11\exc_mean.h"

class demo
{
public:
	demo(const char* str)
	{
		word = str;
		std::cout << "Obiekt demo " << word << " utworzony\n";
	}
	~demo()
	{
		std::cout << "Obiekt demo " << word << " usuniety\n";
	}
	void show() const
	{
		std::cout << "Obiekt demo " << word << " zyje\n";
	}
private:
	std::string word;
};

double hmean(double a, double b);
double gmean(double a, double b);
double means(double a, double b);

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;

	double x, y, z;
	{
		demo d1("z bloku zagniezdzonego w funkcji main()");
		cout << "Podaj dwie liczby: ";
		while (cin >> x >> y)
		{
			try
			{
				z = means(x, y);
				cout << "Srednia srednich liczb " << x << " i " << y << " wynosi " << z << endl;
				cout << "podaj kolejna pare liczb: ";
			}
			catch (bad_hmean& bg)
			{
				bg.mesg();
				cout << "Sprobuj ponownie!\n";
				continue;
			}
			catch (bad_gmean& hg)
			{
				cout << hg.mesg();
				cout << "Uzute wartosci: " << hg.v1 << " i " << hg.v2 << endl;
				cout << "Niestety to koniec zabaway.\n";
				break;
			}
		}
		d1.show();
	}
	cout << "Koniec!\n";
	cin.get();
	cin.get();
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}

double means(double a, double b)
{
	double am, hm, gm;
	demo d2("z funkcji means()");
	am = (a + b) / 2.0;
	try
	{
		hm = hmean(a, b);
		gm = gmean(a, b);
	}
	catch (bad_hmean& bg)
	{
		bg.mesg();
		std::cout << "Przechwycony w means()\n";
		throw;
	}
	d2.show();
	return (am + hm + gm) / 3.0;
}