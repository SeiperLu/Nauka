#include <iostream>
#include <string>
#include "queuetp.h"

int main()
{
	using std::string;
	using std::cin;
	using std::cout;

	QueueTP<string> cs(5);
	string temp;

	while (!cs.isfull())
	{
		cout << "Wpisz swoje imie i nazwisko. Zostaniesz obsluzona/y wedlug kolejnosci przybycia.\nImie i nazwisko: ";
		getline(cin, temp);
		cs.enqueue(temp);
	}

	cout << "Kolejka jest pelna. rozpoczynamy przetwarzanie!\n";
	while (!cs.isempty())
	{
		cs.dequeue(temp);
		cout << "Teraz obslugujemy " << temp << "...\n";
	}

	return 0;
}