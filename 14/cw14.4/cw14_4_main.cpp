#include <iostream>
#include <string>
#include <cstring>
#include "cw14_4.h"
const int SIZE = 5;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;

	Person* lolas[SIZE];
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Podaj kategorie pracownika:\n" << "p: person g: gunslinger k: poker player  b: bad dude w: wyjscie\n";
		cin >> choice;
		while (strchr("pgkbw", choice) == NULL)
		{
			cout << "Wpisz p, g, k, b lub w: ";
			cin >> choice;
		}
		if (choice == 'w')
			break;
		switch (choice)
		{
		case 'p': lolas[ct] = new Person;
			break;
		case 'g': lolas[ct] = new Gunslinger;
			break;
		case 'k': lolas[ct] = new PokerPlayer;
			break;
		case 'b': lolas[ct] = new BadDude;
			break;
		default:
			break;
		}
		cin.get();
		lolas[ct]->Set();
	}

	cout << "\nLista pracownikow:\n";
	int i;
	for (i = 0; i < ct; i++)
	{
		cout << endl;
		lolas[i]->Show();
	}
	for (i = 0; i < ct; i++)
	{
		delete lolas[i];
	}
	cout << "Koniec.\n";
	return 0;
}