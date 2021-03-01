#include <iostream>
#include "studentc.h"
using std::cin;
using std::cout;
using std::endl;

void set(Student& sa, int n);

const int pupiles = 3;
const int quizzes = 5;

int main()
{
	Student ada[pupiles] = { Student(quizzes), Student(quizzes), Student(quizzes) };

	int i;
	for (i = 0; i < pupiles; i++)
		set(ada[i], quizzes);
	cout << "\nLista studentow:\n";
	for (i = 0; i < pupiles; i++)
		cout << ada[i].Name() << endl;
	cout << "\nWyniki:";
	for ( i = 0; i < pupiles; i++)
	{
		cout << endl << ada[i];
		cout << "Srednia: " << ada[i].Average() << endl;
	}

	cout << "Gotowe\n";
	return 0;
}

void set(Student& sa, int n)
{
	cout << "Podaj imie i nazwisko studenta: ";
	getline(cin, sa);
	cout << "Podaj " << n << " wynikow testow:\n";
	for (int i = 0; i < n; i++)
		cin >> sa[i];
	while (cin.get() != '\n')
		continue;
}