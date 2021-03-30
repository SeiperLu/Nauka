#include <iostream>
#include <algorithm>
#include <set>
template<class T>
int reduce(T ar[], int n);

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
	cout << "Ilosc elementow po segregowaniu: " << reduce<long>(arr, array_size);
	delete[] arr;
	cout << "Podaj ilosc slow: ";
	cin >> array_size;
	string* str_array = new string[array_size];
	for (int i = 0; i < array_size; i++)
	{
		cout << "Slowo " << i + 1 << ": ";
		cin >> str_array[i];
	}
	cout << "Ilosc elementow po segregowaniu: " << reduce<string>(str_array, array_size);
	delete[] str_array;
	return 0;
}
template<class T>
int reduce(T ar[], int n)
{
	std::set<T> temp(ar, ar + n);
	std::cout << "Posegregowana tablica: ";
	for (auto i = temp.begin(); i != temp.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;
	return temp.size();
}