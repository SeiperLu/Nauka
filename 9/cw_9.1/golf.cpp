#include <iostream>
#include <string>
#include "golf.h"


void setgolf(golf& g, const char* name, int hc)
{
	int i = 0;
	while (*(name + i) != '\0' && i<(Len-1))
	{
		g.fullname[i] = *(name + i);
		i++;
	}
	if (*(name+i-1)!='\0' && i!=0)
	{
		g.fullname[i] = '\0';
	}
	else 
	{
		g.fullname[0] = NULL;
	}
	g.handicap = hc;
}

int setgolf(golf& g)
{
	using std::cout;
	using std::cin;
	using std::string;
	char name[Len];
	int handicap;
	char ch;
	string bufor;
	cout << "Podaj naziwsko: ";
	cin.get(name,Len);
	cin.get(ch);
	while (ch != '\n' && ch != NULL)
	{
		cin.get(ch);
	}
	
	
	
		
	cout << "Podaj handicap: ";
	cin >> handicap;
	setgolf(g, name, handicap);
	if (g.fullname[0] == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Naziwsko: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
}