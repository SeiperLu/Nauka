#include <iostream>
#include "golf_class.h"

golf::golf(const char* name, int hc)
{
	int i = 0;
	while (*(name + i) != '\0' && i < (Len - 1))
	{
		fullname[i] = *(name + i);
		i++;
	}
	if (*(name + i - 1) != '\0' && i != 0)
	{
		fullname[i] = '\0';
	}
	else
	{
		fullname[0] = NULL;
	}
	handicap = hc;
}

golf::golf()
{
	using std::cout;
	using std::cin;
	cout << "Proszê podaæ imie: ";
	cin.get(fullname, Len);
	char ch;
	cin.get(ch);
	while (ch != '\n' && ch != NULL)
	{
		cin.get(ch);
	}
	cout << "Prosze podac handicap: ";
	cin >> handicap;
}

void golf::sethandicap(int hc)
{
	handicap = hc;
}

void golf::showgolf()
{
	using std::cout;
	using std::endl;
	cout << "Imie: " << fullname<<endl;
	cout << "Handicap: " << handicap << endl;
	
}

golf::~golf()
{
}