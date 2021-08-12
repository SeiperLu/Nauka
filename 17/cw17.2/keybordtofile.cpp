#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	cout << "Podaj nazwe pliku: ";
	string filename;
	cin >> filename;
	cin.get();
	ofstream fout(filename.c_str());
	cout << "Podaj dane: ";
	char ch;
	cin.get(ch);
	while (ch != '$')
	{
		fout << ch;
		if (ch == '\n')
			cout << "Podaj nowe dane: ";
		cin.get(ch);
	}
	fout.close();
	return 0;
}