#include "worker0.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

Worker::~Worker() {}

void Worker::Set()
{
	cout << "Podaj imie i nazwisko praconwika: ";
	getline(cin, fullname);
	cout << "Podaj nume rindyfikacyjny pracownika: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

void Worker::Show() const
{
	cout << "Imie i naziwkso: " << fullname << endl;
	cout << "Numer Indefikacyjny: " << id << endl;
}

void Waiter::Set()
{
	Worker::Set();
	cout << "Podaj poziom elegancji kelnera: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Show() const
{
	cout << "Kategoria: kelner\n";
	Worker::Show();
	cout << "Elegancja: " << panache << endl;
}

 const char* Singer::pv[] = { "inny","alt","kontral","sopran","bas","baryton", "tenor" };

void Singer::Set()
{
	Worker::Set();
	cout << "Podaj numer skali glosu piosenkarza:\n";
	int i;
	for (  i = 0; i < Vtypes ; i++)
	{
		cout << i << ": " << pv[i] << "  ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
		cout << endl;
	while (cin >> voice && (voice < 0 || voice >= Vtypes))
		cout << "Podaj wartosc nie ujemna i mniejsza od " << Vtypes << endl;
	while (cin.get() != '\n')
		continue;
}

void Singer::Show() const
{
	cout << "Kategoria: piosenkarz\n";
	Worker::Show();
	cout << "Skala g³osu: " << pv[voice] << endl;
}