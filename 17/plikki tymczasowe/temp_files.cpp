#include <iostream>
#include <cstdlib>
#pragma warning(disable : 4996)

int main()
{
	using namespace std;
	cout << "Ten system moze wygenerowac maksymalnie " << TMP_MAX << " nazw tymczasowych skladajacych sie z maksymalnie " << L_tmpnam << " znakow.\n";
	char pszName[L_tmpnam] = { '\0' };
	cout << "Oto dziesiec nazw:\n";
	for (int i = 0; i < 10; i++)
	{
		tmpnam(pszName);
		cout << pszName << endl;
	}
	return 0;
}