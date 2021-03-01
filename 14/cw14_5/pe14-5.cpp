#include <iostream>
#include "emp.h"
using namespace std;

int main()
{
	employee em("Tadeusz", "Hubert", "Sprzedawca");
	cout << em << endl;
	em.ShowAll();

	manager ma("Amforiusz", "Smoczewski", "Malarz", 5);
	cout << ma << endl;
	ma.ShowAll();

	fink fi("Maurycy", "Olkuski", "Hydraulik", "julian Bar");
	cout << fi << endl;
	fi.ShowAll();
	highfink hf(ma, "Jan kudlaty");
	hf.ShowAll();
	cout << "Wcisnij dowolny przycisk, aby przejsc do nastepnego etapu:\n";
	cin.get();
	highfink hf2;
	hf2.SetAll();
	cout << "Uzywa wskaznika abstr_emp*:\n";
	abstr_amp *tri[4] = { &em,&fi,&hf,&hf2 };
	for (int i = 0; i < 4; i++)
	{
		tri[i]->ShowAll();
	}
	return 0;
}