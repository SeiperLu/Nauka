#include <iostream>
#include "Stack_12.4.h"
#include <cctype>

int main()
{
	using namespace std;
	Stack st;
	unsigned long po;
	char ch;
	cout << "nacisnij d aby wprowadzic, p aby przetworzyc lub k aby zakonczyc\n";
	while (cin >> ch && toupper(ch) != 'K')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case'D':
		case'd':
			cout << "Podaj numer nowej deklaracji: ";
			cin >> po;
			if (st.isfull())
				cout << "Stos pelen\n";
			else
				st.push(po);
			break;
		case'P':
		case'p':
			if (st.isempty())
				cout << "Stos pusty\n";
			else
			{
				st.pop(po);
				cout << "Deklaracja nr: " << po << " zdjeta\n";
			}
			break;
		default:
			break;
		}
		cout << "nacisnij d aby wprowadzic, p aby przetworzyc lub k aby zakonczyc\n";
	}
	Stack st2;
	st2 = st;
	cout << "Kopiowanie do st2\n";
	cout << "nacisnij d aby wprowadzic, p aby przetworzyc lub k aby zakonczyc\n";
	while (cin >> ch && toupper(ch) != 'K')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case'D':
		case'd':
			cout << "Podaj numer nowej deklaracji: ";
			cin >> po;
			if (st2.isfull())
				cout << "Stos pelen\n";
			else
				st2.push(po);
			break;
		case'P':
		case'p':
			if (st2.isempty())
				cout << "Stos pusty\n";
			else
			{
				st2.pop(po);
				cout << "Deklaracja nr: " << po << " zdjeta\n";
			}
			break;
		default:
			break;
		}
		cout << "nacisnij d aby wprowadzic, p aby przetworzyc lub k aby zakonczyc\n";
	}
	cout << "nacisnij d aby wprowadzic, p aby przetworzyc lub k aby zakonczyc\n";
	while (cin >> ch && toupper(ch) != 'K')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case'D':
		case'd':
			cout << "Podaj numer nowej deklaracji: ";
			cin >> po;
			if (st.isfull())
				cout << "Stos pelen\n";
			else
				st.push(po);
			break;
		case'P':
		case'p':
			if (st.isempty())
				cout << "Stos pusty\n";
			else
			{
				st.pop(po);
				cout << "Deklaracja nr: " << po << " zdjeta\n";
			}
			break;
		default:
			break;
		}
		cout << "nacisnij d aby wprowadzic, p aby przetworzyc lub k aby zakonczyc\n";
	}
	cout << "Fajrant!\n";
	return 0;
}