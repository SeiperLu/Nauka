#include <iostream>
#include "Wine_cw_14.1.h"

int main(void)
{
	using std::cin;
	using std::endl;
	using std::cout;

	cout << "Podaj nazwe wina: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Podaj liczbe rocznikow: ";
	int yrs;
	cin >> yrs;

	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.Show();

	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };
	Wine more("Gushing Grape", YRS, y, b);
	more.Show();
	cout << "Laczna liczba butelek wina " << more.Label() << ": " << more.sum() << endl;
	cout << "Koniec.\n";
	return 0;
}