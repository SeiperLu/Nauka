#include <iostream>
#include <string>
#include "boost/lexical_cast.hpp"


int main()
{
	using namespace std;
	cout << "Podaj swoja wage: ";
	float weight;
	cin >> weight;
	string gain = "10-procentowy przysot ze ";
	string wt = boost::lexical_cast<string>(weight);
	gain = gain + wt + " daje ";
	weight = 1.1 * weight;
	gain = gain + boost::lexical_cast<string>(weight)+".";
	cout << gain << endl;
	return 0;
}