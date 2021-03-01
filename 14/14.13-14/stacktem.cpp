#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"

using std::cin;
using std::cout;

int main()
{
	Stack<std::string> st;
	char ch;
	std::string po;
	cout << "Wpisz D, aby dodac zamiwienie,\nP, aby przetworzyc zammowienie, i Z, aby zakonczyc.\n";
	while (cin >> ch && std::toupper(ch) != 'Z')
	{
		while (cin.get() != '\n')
			continue;
		if (!std::isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		default:
			break;
		case 'D' :
		case 'd' :
			cout << "Podaj nowy numer zamowienia: ";
			cin >> po;
			if (st.isfull())
				cout << "Stos pelny\n";
			else
				st.push(po);
			break;
		case 'P' :
		case 'p' :
			if (st.isempty())
				cout << "Stos pusty.\n";
			else
			{
				st.pop(po);
				cout << "Numer zamowienia " << po << " zdjecty.\n";
				break;
			}
		}
		cout << "Wpisz D, aby dodac zamiwienie,\nP, aby przetworzyc zammowienie, i Z, aby zakonczyc.\n";
	}
	cout << "Koniec.\n";
	return 0;
}