#include "workermi.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

Worker::~Worker() {}

void Worker::Data() const
{
	cout << "Imie i naziwsko : " << fullname << endl;
	cout << "Numer indyfikacyjny: " << id << endl;
}

void Worker::Get()
{
	getline(cin, fullname);
	cout << "Podaj numer indyfikacjyjny: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Set()
{
	cout << "Podaj imie i naziwsko kelnera: ";
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	cout << "Kategoria: kelner\n";
	Worker::Data();
	Data();
}

void Waiter::Data() const
{
	cout << "Elegancja: " << panache << endl;
}

void Waiter::Get()
{
	cout << "Podaj poziom elegenacji kelnera: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

const char* Singer::pv[Singer::Vtypes] = { "inny","alt","kontralt","sopran", "bas", "baryton", "tenor" };

void Singer::Set()
{
	cout << "Podaj imie i naziwsko piosenkarza: ";
	Worker::Get();
	Get();
}

void Singer::Show() const
{
	cout << "Kategoria: piosenkarz\n";
	Worker::Data();
	Data();
}

void Singer::Data() const
{
	cout << "Skala glosu: " << pv[voice] << endl;
}

void Singer::Get()
{
	cout << "Podaj numer skali glosu piosenkarza:\n";
	int i;
	for ( i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << "  ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 == 0)
		cout << endl;
	cin >> voice;
	while (cin.get() != '\n')
		continue;
}

void SingingWaiter::Data() const
{
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::Set()
{
	cout << "Podaj imie i naziwsko spiewajacego kelnera: ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const
{
	cout << "Kategoria: spiewajacy kelner\n";
	Worker::Data();
	Data();
}