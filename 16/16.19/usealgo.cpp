#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>

using namespace std;
char toLower(char ch) { return tolower(ch); }
string& ToLower(string& st);
void display(const string& s);

int main()
{
	vector<string> words;
	cout << "podaj slowo (koniec, aby zakonczyc):\n";
	string input;
	while (cin >> input && input != "koniec")
		words.push_back(input);
	cout << "podales nastepujace slowa:\n";
	for_each(words.begin(), words.end(), display);
	cout << endl;

	set<string> wordset;
	transform(words.begin(), words.end(), insert_iterator<set<string>>(wordset, wordset.begin()), ToLower);
	cout << "\nAlfabetyczna lista slow:\n";
	for_each(wordset.begin(), wordset.end(), display);
	cout << endl;

	map<string, int> wordmap;
	set<string>::iterator si;
	for (si = wordset.begin(); si != wordset.end(); si++)
		wordmap[*si] = count(words.begin(), words.end(), *si);

	cout << "\nLiczba wystapien slow:\n";
	for (si = wordset.begin(); si != wordset.end(); si++)
		cout << *si << ": " << wordmap[*si] << endl;

	return 0;
}

string& ToLower(string& st)
{
	transform(st.begin(), st.end(),st.begin(), toLower);
	return st;
}

void display(const string& s)
{
	cout << s << " ";
}