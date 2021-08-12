#include <iostream>
const int SLEN = 10;

inline void eatline() { while (std::cin.get() != '\n') continue; }

int main()
{
	using std::cin;
	using std::endl;
	using std::cout;

	char name[SLEN];
	char title[SLEN];
	cout << "podaj swoje imie i nazwisko: ";
	cin.get(name, SLEN);
	if (cin.peek() != '\n')
		cout << "Przykro nam miejsca wystarczy tylko na " << name << endl;
	eatline();
	cout << "Drogi(-a) " << name << ", podaj sswoje stanowisko: \n";
	cin.get(title, SLEN);
	if (cin.peek() != '\n')
		cout << "Bylismy zmuszeni skrocic nazwe twojego stanowiska.\n";
	eatline();
	cout << "imie i nazwisko: " << name << "\n   Stanowisko: " << title << endl;
	return 0;
}