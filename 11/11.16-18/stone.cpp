#include <iostream>
using std::cout;
#include "stonewt.h"

void display(const Stonewt& st, int n);
int main()
{
	Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);

	cout << "Celebryta wayl ";
	incognito.show_stn();
	cout << "Detektyw wazyl ";
	wolfe.show_stn();
	cout << "Prezydent wazylo ";
	taft.show_lbs();
	incognito = 276.8;
	taft = 325;
	cout << "Po obiedzie celebryta wazy ";
	incognito.show_stn();
	cout << "Po obiedzie prezydent wazy ";
	taft.show_lbs();
	display(taft, 2);
	cout << "A zapasnik wazy jeszcze wiecej.\n";
	display(427, 2);
	cout << "Nie pozostal kamien na kamineiu\n";
	return 0;
}

void display(const Stonewt& st, int n)
{
	for (int  i = 0; i < n; i++)
	{
		cout << "Oho! ";
		st.show_stn();
	}
}