#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	string filename;
	cout << "Podaj nazwe dla nowego pliku: ";
	cin >> filename;

	ofstream fout(filename.c_str());

	fout << "tylko dla Twoich oczu!\n";
	cout << "podaj swoj tajnu numer: ";
	float secret;
	cin >> secret;
	fout << "Twoj tajnu numer to " << secret << endl;
	fout.close();

	ifstream fin(filename.c_str());
	cout << "Oto zawartosc pliku " << filename << ":\n";
	char ch;
	while (fin.get(ch))
		cout << ch;
	cout << "Gotowe!\n";
	fin.close();
	return 0;
}