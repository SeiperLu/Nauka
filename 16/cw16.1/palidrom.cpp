#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>


bool is_palidrom(std::string& s);

int main()
{
	using namespace std;
	cout << "Podaj slowo (koniec, aby zakonczyc): ";
	string temp;
	while (cin >> temp && temp != "koniec")
	{
		transform(temp.begin(), temp.end(), temp.begin(), tolower);
		if (is_palidrom(temp))
			cout << "Slowo jest palidromem!\n";
		else
			cout << "Slowo nie jest palidromem.\n";
		cout << "Podaj kolejne slowo (koniec, aby zakonczyc): ";
	}
}

bool is_palidrom(std::string& s)
{
	std::string reverse;
	for (std::reverse_iterator<std::string::iterator> si = s.rbegin(); si != s.rend(); si++)
		reverse.push_back(*si);
	if (s == reverse)
		return true;
	else
		return false;
}