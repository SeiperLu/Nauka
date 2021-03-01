#include <iostream>
#include "strngbad.h"
using std::cout;

void callme1(StringBad&);
void callme2(StringBad);

int main()
{
	using std::endl;
	{
		cout << "Zaczynamy blok wewnetrzny.\n";
		StringBad headline1("Spiew skowronka - nowe zwrotki usypiaja?");
		StringBad headline2("Kogutom smierc");
		StringBad sports("Brzask wypada z ligi, skandal sedziowski");
		cout << "Z osttaniej chwili: " << headline1 << endl;
		cout << "Temat dnia: " << headline2 << endl;
		cout << "Wiadomosci sportowe: " << sports << endl;
		callme1(headline1);
		cout << "Z osttaniej chwili: " << headline1 << endl;
		callme2(headline2);
		cout << "Temat dnia: " << headline2 << endl;
		cout << "Inicjalizacka obiektu innym obiektem:\n";
		StringBad sailor = sports;
		cout << "Z kraju: " << sailor << endl;
		cout << "przypisanie obiektu do innego obiektu:\n";
		StringBad knot;
		knot = headline1;
		cout << "Ze swiata: " << knot << endl;
		cout << "Koniec bloku.\n";
	}
	cout << "Koniec main()\n";
	return 0;
}

void callme1(StringBad& rsb)
{
	cout << "Obiekt ciagu przekazany przez referencje:\n";
	cout << "   \"" << rsb << "\"\n";
}

void callme2(StringBad sb)
{
	cout << "Obiekt ciagu przekazany przez wartosc:\n";
	cout << "   \"" << sb << "\"\n";
}