#include <iostream>

int main()
{
	using namespace std;
	cout << "Podaj ciag znakow do zliczenia: ";
	char ch;
	int size = 0;
	while (cin.peek() != '$' )
	{
		cin.get(ch);
		size++;
	}

	cout << "Liczba znakow wynosi(razem z bia³ymi) " << size << endl;
	cin.get(ch);
	cout << "nastepny znak to " << ch << endl;
	return 0;
		
}