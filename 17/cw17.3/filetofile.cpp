#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
int main()
{
	using namespace std;
	string file1;
	string file2;
	cout << "Podaj nazwe pliku zrodlowego: ";
	getline(cin, file1);
	fstream fin(file1.c_str(), ios_base::in);
	if (!fin.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku " << file1 << endl;
		exit(EXIT_FAILURE);
	}
	cout << "Podaj nazwe pliku docelowego: ";
	getline(cin, file2);
	fstream fout(file2.c_str(), ios_base::out);
	if (!fout.is_open())
	{
		cout << "Nie udalo sie otworzyc pliku " << file2 << endl;
		exit(EXIT_FAILURE);
	}
	char ch;
	fin.get(ch);
	while (fin.get(ch))
		fout << ch;
	fin.close();
	fout.close();
	return 0;
}