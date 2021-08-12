#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main()
{
	using namespace std;
	string file1;
	string file2;
	string file3;
	cout << "Podaj nazwe 1 pliku wejsciowego: ";
	getline(cin, file1);
	fstream fin1(file1.c_str(), ios_base::in);
	if (!fin1.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku " << file1 << ". Koniec programu.";
		exit(EXIT_FAILURE);
	}
	cout << "Podaj nazwe 2 pliku wejsciowego: ";
	getline(cin, file2);
	fstream fin2(file2.c_str(), ios_base::in);
	if (!fin2.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku " << file2 << ". Koniec programu.";
		exit(EXIT_FAILURE);
	}
	cout << "Podaj nazwe pliku wyjsciowego: ";
	getline(cin, file3);
	fstream fout(file3.c_str(), ios_base::out);
	if (!fout.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku " << file3 << ". Koniec programu.";
		exit(EXIT_FAILURE);
	}
	string temp1;
	string temp2;
	while (getline(fin1, temp1) || getline(fin2, temp2))
	{
		if (temp1.size() > 0)
		{
			if (getline(fin2, temp2))
				fout << temp1 << " " << temp2 << endl;
			else
				fout << temp1 << endl;

		}
		else
			fout << temp2 << endl;
		temp1.clear();
		temp2.clear();
	}
	fin1.close();
	fin2.close();
	fout.close();
	return 0;
}