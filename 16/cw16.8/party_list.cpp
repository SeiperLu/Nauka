#include <iostream>
#include <set>


int main()
{
	using namespace std;
	string temp;
	set<string> guests1;
	set<string> guests2;
	int i = 1;
	cout << "Podawaj przyjacol Bolek!(koniec aby zakonczyc)\nPrzyjaciel nr " << i << ": ";
	while (cin >> temp && temp != "koniec")
	{
		guests1.insert(temp);
		i++;
		cout << "Przyjaciel nr " << i << ": ";
	}
	ostream_iterator<string, char> out(cout, " ");
	copy(guests1.begin(), guests1.end(), out);
	cout << endl;
	i = 1;
	cout << "Podawaj przyjacol Lolek!(koniec aby zakonczyc)\nPrzyjaciel nr " << i << ": ";
	while (cin >> temp && temp != "koniec")
	{
		guests2.insert(temp);
		i++;
		cout << "Przyjaciel nr " << i << ": ";
	}
	copy(guests2.begin(), guests2.end(), out);
	cout << endl;
	set<string> final_list(guests1);
	for (set<string>::iterator i = guests2.begin(); i != guests2.end(); i++)
		final_list.insert(*i);
	cout << "Wspolna lista: ";
	copy(final_list.begin(), final_list.end(), out);
}