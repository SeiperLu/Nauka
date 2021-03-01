#include <iostream>
#include <cctype>
#include "stack_class.h"

int main()
{
	using namespace std;
	Stack st;
	char ch;
	static double dlug = 0;
	customer po;
	cout << "Nacisnij D, aby wprowadzic deklaracje, \n"
		<< "P, aby przetworzyc deklaracje lub K, aby zakonczyc.\n";
	while (cin >> ch && toupper(ch) != 'K')
	{
		while (cin.get() != '\n')
			continue;
		if(!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case'D':
		case'd':
			cout << "Podaj imie: ";
			cin.getline(po.fullname, 35);
			cout << "Podaj oplate: ";
			cin >> po.payment;
			if (st.isfull())
				cout << "Stos pelny!\n";
			else
				st.push(po);
			break;
		case'P':
		case'p':
			if (st.isempty())
				cout << "Stos pusty!\n";
			else
			{
				st.pop(po);
				dlug += po.payment;
				cout << "Osoba " << po.fullname << " oplacona.\n";
				cout << "Akualna naleznosc: " << dlug << endl;
			}
			break;
		default:
			break;
		}
		cout << "Nacisnij D, aby wprowadzic kolejna osobe, \n"
			<< "P, aby usunac lub K, aby zakonczyc.\n";
	}
	cout << "Fajrant!\n";
	return 0;
}