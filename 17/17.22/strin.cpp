#include <iostream>
#include <sstream>
#include <string>

int main()
{
	using namespace std;
	string lit = "Dzien byl ciemny i burzowy, lecz ksiezyc w pelni swiecil zywym blaskiem.";
	istringstream instr(lit);
	string word;
	while (instr >> word)
	{
		cout << word << endl;
	}
	return 0;
}