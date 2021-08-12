#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

const char* file = "goscie.txt";
int main()
{
	using namespace std;
	char ch;
	ifstream fin;
	fin.open(file);
	if (fin.is_open())
	{
		cout << "Oto aktualna zawartosc pliku " << file << ":\n";
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}
	ofstream fout(file, ios_base::out | ios_base::app);
	if (!fout.is_open())
	{
		cerr << "Nie mozna otworzyc pliku " << file << " do zapisu.\n";
		exit(EXIT_FAILURE);
	}
	cout << "Podaj imiona i nazwiska gosci (aby zakonczyc, wprowadz pusty wiersz):\n";
	string name;
	while (getline(cin,name) && name.size()>0)
	{
		fout << name << endl;
	}
	fout.close();
	fin.clear();
	fin.open(file);
	if (fin.is_open())
	{
		cout << "Oto nowa zawartosc pliku " << file << ":\n";
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}
	cout << "Koniec!\n";
	return 0;
}