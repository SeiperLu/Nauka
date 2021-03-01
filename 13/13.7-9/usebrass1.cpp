#include <iostream>
#include "brass.h"

int main()
{
	using std::cout;
	using std::endl;

	Brass Piggy("Bonifacy Kot", 381299, 12000.00);
	BrassPlus Hoggy("Horacy Biedronka", 382288,9000.00);
	Piggy.ViewAcct();
	cout << endl;
	Hoggy.ViewAcct();
	cout << endl;
	cout << "Wplata 3000 zl na arachunek pana Biedronki:\n";
	Hoggy.Deposit(3000.00);
	cout << "Nowy stan konta: " << Hoggy.Balance() << " zl\n";
	cout << "wyplata 12600 zl z rachunku pana Kota:\n";
	Piggy.Withdraw(12600.00);
	cout << "Stan konta Kota: " << Piggy.Balance() << " zl\n";
	cout << "wyplata 12600 zl z rachunku pana Biedronki:\n";
	Hoggy.Withdraw(12600.00);
	Hoggy.ViewAcct();
	return 0;
}