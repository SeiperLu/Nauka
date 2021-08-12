#include <iostream>
#include "emp_file.h"
#include <fstream>;
using namespace std;
const int MAX = 10;

int main()
{

	const char* file = "pracownicy.dat";
	fstream finout;
	finout.open(file, ios_base::in | ios_base::out);
	char ch;
	abstr_amp* pc[MAX];
	int classtype;
	int count = 0;
	if (finout.is_open())
	{
		cout << "Aktualan zawartosc pliku " << file << ":\n";
		while ((finout >> classtype).get(ch) && count < MAX)
		{
			switch (classtype)
			{
			case Employee:
				pc[count] = new employee;
				pc[count]->getall(finout);
				count++;
				break;
			case Manager:
				pc[count] = new manager;
				pc[count]->getall(finout);
				count++;
				break;
			case Fink:
				pc[count] = new fink;
				pc[count]->getall(finout);
				count++;
				break;
			case Highfink:
				pc[count] = new highfink;
				pc[count]->getall(finout);
				count++;
				break;
			default:
				break;
			}
		}
		for (int i = 0; i < count; i++)
		{
			pc[i]->ShowAll();
			cout << endl;
		}
	}
	else if(!finout.is_open() && finout.eof())
	{
		cerr << "Blad przy probie odczytu pliku " << file << ".\n Koniec programu.";
		exit(EXIT_FAILURE);
	}
	int choice;
	ofstream fout(file, ios_base::app);
	while (count < MAX)
	{
		cout << "Co chcesz zrobic?\n";
		cout << "Dodac do pliku nowe dane - 1\nWyswietlic zawartosc pliku - 2\nZakonczyc program - 3\nOpcja: ";
		cin >> choice;
		cin.get();
		switch (choice)
		{
		case 1:
			cout << "Podaj jaki typ wprowadzasz.\n0 - employee\n1 - manager\n2 - fink\n3 - highfink\n";
			cout << "Opcja: ";
			cin >> classtype;
			cin.get();
			switch (classtype)
			{
			case Employee:
				pc[count] = new employee;
				pc[count]->SetAll();
				pc[count]->writeall(fout);
				count++;
				break;
			case Manager:
				pc[count] = new manager;
				pc[count]->SetAll();
				pc[count]->writeall(fout);
				count++;
				break;
			case Fink:
				pc[count] = new fink;
				pc[count]->SetAll();
				pc[count]->writeall(fout);
				count++;
				break;
			case Highfink:
				pc[count] = new highfink;
				pc[count]->SetAll();
				pc[count]->writeall(fout);
				count++;
				break;
			default:
				break;
			}
			break;
		case 2:
			for (int i = 0; i < count; i++)
			{
				pc[i]->ShowAll();
				cout << endl;
			}
			break;
		case 3:
			exit(EXIT_FAILURE);
		default:
			cout << "Bledne dane ponow podaj nowe: ";
			break;
		}

	}
	finout.close();
	return 0;
}