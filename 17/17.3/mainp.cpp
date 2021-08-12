#include <iostream>

int main()
{
	using namespace std;
	cout << "Podaj liczbe calkowita: ";
	int n;
	cin >> n;

	cout << "n   n*n\n";
	cout << n << "   " << n * n << " (dziesietnie)\n";
	cout << hex;
	cout << n << "   " << n * n << " (szesnastkowo)\n";
	cout << oct << n << "   " << n * n << " (osemkowo)\n";
	dec(cout);
	cout << n << "   " << n * n << " (dziesietnie)\n";
	return 0;
}