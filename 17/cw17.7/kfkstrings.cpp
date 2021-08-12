#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "Store.h"
 

int main()
{
	using namespace std;
	vector<string> vostr;
	string temp;

	cout << "Podaj lancuchy (aby zakonczyc wprowadz pusty wiersz):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Oto twoje dane wejsciowe.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);

	ofstream fout("lancuchy.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	vector<string> vistr;
	ifstream fin("lancuchy.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Nie mozna otworzyc pliku do odczytu.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin,vistr);
	cout << "\nOto lancuchy odczytane z pliku:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);
	fin.close();
	cin.get();
	return 0;
}