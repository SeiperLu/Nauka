#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <locale>


bool is_palidrom(std::string& s);
int main()
{
	using namespace std;
	cout << "Podaj slowo (koniec, aby zakonczyc): ";
	string words;
	while (getline(cin,words) && words != "koniec")
	{
		if (is_palidrom(words))
			cout << "Slowo jest palidromem!\n";
		else
			cout << "Slowo nie jest palidromem.\n";
		cout << "Podaj kolejne slowo (koniec, aby zakonczyc): ";
	}
}

bool is_palidrom(std::string& s)
{
	std::locale locale;
	std::string temp;
	temp.resize(s.size());
	transform(s.begin(), s.end(), temp.begin(), tolower);
	for (std::string::iterator i = temp.begin(); i != temp.end(); i++)
		{
			if (!isalpha(*i, locale))
				temp.erase(i);
		}
	std::string reverse;
	for (std::reverse_iterator<std::string::iterator> si = temp.rbegin(); si != temp.rend(); si++)
		reverse.push_back(*si);
	if (temp == reverse)
		return true;
	else
		return false;
}
