#include <iostream>
#include <cstdlib>
#include <ctime>
#include "E:\Projekty\12\12.4-6\string1.h"

const int ArSize = 10;
const int MaxLen = 81;


int main()
{
	using namespace std;
	String name;
	cout << "CZesc, jak masz na imie?\n";
	cin >> name;
	cout << name << ", wpisz do " << ArSize << " krotkich powiezonek <pusty wiersz konczy wprowadzanie>:\n";
	String sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}
	int total = i;
	if (total > 0)
	{
		cout << "Oto twoje powiedzonka:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;
		String* shortest = &sayings[0];
		String* first = &sayings[0];
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < shortest->length())
				shortest = &sayings[i];
			if (sayings[i] < *first)
				first = &sayings[i];
		}
		cout << "Najkrotsze powiedzonko:\n" << *shortest << endl;
		cout << "Powiedzonko alfabetycznie pierwsze:\n" << *first << endl;
		srand(time(0));
		int choice = rand() % total;
		String* favorite = new String(sayings[choice]);
		cout << "Moje ulubione powiedzonko:\n" << *favorite << endl;
		delete favorite;
	}
	else
	{
		cout << "Brak damych!\n";
	}
	cout << "Eldo\n";
	return 0;
}
