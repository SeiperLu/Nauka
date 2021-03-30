#include <iostream>
#include <algorithm>
#include <set>

int reduce(long ar[], int n);

int main()
{
	using namespace std;
	cout << "Podaj wielkosc tablicy: ";
	int array_size;
	cin >> array_size;
	long* arr = new long[array_size];

	for (int i = 0; i < array_size; i++)
	{
		cout << "Wartosc " << i + 1 << ": ";
		cin >> arr[i];
	}

	cout << "Ilosc elementow po segregowaniu: " << reduce(arr, array_size);
	delete[] arr;
	return 0;
}

int reduce(long ar[], int n)
{
	std::set<long> temp(ar,ar+n);
	std::cout << "Posegregowana tablica: ";
	for (std::set<long>::iterator i = temp.begin(); i != temp.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;
	return temp.size();
}