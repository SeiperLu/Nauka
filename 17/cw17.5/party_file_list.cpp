#include <iostream>
#include <set>
#include <fstream>
#include <cstdlib>


const int LIM = 10;


int main()
{
	using namespace std;
	const char file1[LIM] = { "bolek.dat" };
	const char file2[LIM] = { "lolek.dat" };
	fstream finout(file1, ios_base::in);
	if (!finout.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku " << file1 << ".\n Koniec programu.";
		exit(EXIT_FAILURE);
	}
	string temp;
	set<string> guests1;
	set<string> guests2;
	while (finout >> temp)
	{
		guests1.insert(temp);
		temp.clear();
	}
	finout.close();
	ostream_iterator<string, char> out(cout, "\n");
	copy(guests1.begin(), guests1.end(), out);
	cout << endl;

	finout.open(file2, ios_base::in);
	if (!finout.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku " << file2 << ".\n Koniec programu.";
		exit(EXIT_FAILURE);
	}
	while (finout >> temp)
	{
		guests2.insert(temp);
		temp.clear();
	}
	finout.close();
	copy(guests2.begin(), guests2.end(), out);
	cout << endl;
	set<string> final_list(guests1);
	for (set<string>::iterator i = guests2.begin(); i != guests2.end(); i++)
		final_list.insert(*i);
	cout << "Wspolna lista: ";
	copy(final_list.begin(), final_list.end(), out);
	finout.open("bolilol.dat", ios_base::out);
	ostream_iterator<string, char> fout(finout, "\n");
	copy(final_list.begin(), final_list.end(), fout);
	finout.close();
	return 0;

}