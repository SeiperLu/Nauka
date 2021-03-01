#include <iostream>
#include "tabyenn0.h"

int main(void)
{
	using std::cout;
	TableTennisPlayer player1("Jacek", "Pogody", true);
	TableTennisPlayer player2("Teresa", "Botako", false);
	player1.Name();
	if (player1.HasTable())
		cout << ": Posiada stol.\n";
	else
		cout << ": nie posiada stolu.\n";
	player2.Name();
	if (player2.HasTable())
		cout << ": Posiada stol.\n";
	else
		cout << ": nie posiada stolu.\n";
	return 0;
}