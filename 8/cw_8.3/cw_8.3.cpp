#include <iostream>
#include <string>

using namespace std;
void naduze(string& h);

int main()
{
	cout << "Podaj lancuch: ";
	string lancuch;
	string koniec = "q";
	
	while (getline(cin,lancuch) && lancuch.compare(koniec))
	{
		for (int i = 0; lancuch[i] != '\0'; i++)
		{
			lancuch[i]=toupper(lancuch[i]);
		}
		cout << lancuch <<endl;
		cout << "Nastepny lancuch: ";
	}
	cout << "Do widzenia!";
	return 0;
}