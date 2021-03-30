#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	using namespace std;
	string letters;

	cout << "Podaj zestaw liter (koniec, aby zakonczyc): ";
	while (cin >> letters && letters != "koniec")
	{
		cout << "Permutacje liter " << letters << endl;
		sort(letters.begin(), letters.end());
		cout << letters << endl;
		while (next_permutation(letters.begin(), letters.end()))
			cout << letters << endl;
		cout << "Podaj koljeny zestaw liter (koniec, aby zakonczyc): ";
	}
	cout << "Koniec.\n";
	return 0;
}