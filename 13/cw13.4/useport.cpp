#include <iostream>
#include "port.h"
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	Port* port_types[4];
	char temp_brand[30];
	char temp_style[30];
	char temp_nickname[30];
	int temp_year;
	int temp_bottles;
	int kind;

	for (int i = 0; i < 4; i++)
	{
		cout << "Podaj marke: ";
		cin.getline(temp_brand,30);
		cout << "Podaj styl: ";
		cin.getline(temp_style,30);
		cout << "Podaj ilosc butelek: ";
		cin >> temp_bottles;
		cout << "Wpisz 1 dla Port lub 2 dla VintagePort: ";
		while (cin >> kind && (kind != 1 && kind != 2))
			cout << "Wpisz 1 lub 2: ";
		if (kind == 1)
			port_types[i] = new Port(temp_brand, temp_style, temp_bottles);
		else
		{
			cin.get();
			cout << "Podaj nazwe: ";
			cin.getline(temp_nickname, 30);
			cout << "Podaj rok: ";
			cin >> temp_year;
			port_types[i] = new VintagePort(temp_brand, temp_style, temp_bottles, temp_nickname, temp_year);
		}
		while (cin.get() != '\n')
			continue;
	}

	for (int i = 0; i < 4; i++)
	{
		port_types[i]->Show();
		cout << endl;
		*port_types[i] += 10;
		cout << *port_types[i] << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		delete port_types[i];
	}

	return 0;
}