#include <iostream>
#include <sstream>
#include <string>

int main()
{
	using  namespace std;
	ostringstream outstr;

	string hdisk;
	cout << "Jak nazywa sie twoj dysk twardy? ";
	getline(cin, hdisk);
	int cap;
	cout << "Jaka jest jego pojemnosc w GB? ";
	cin >> cap;
	outstr << "Dysk twardy " << hdisk << " ma pojemnosc " << cap << " gigabajtow.\n";
	string result = outstr.str();
	cout << result;
	return 0;
 }