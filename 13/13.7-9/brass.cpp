#include <iostream>
#include "brass.h"
using std::cout;
using std::endl;
using std::string;
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

Brass::Brass(const string& s, long an, double bal)
{
	fullName = s;
	accNum = an;
	balance = bal;
}

void Brass::Deposit(double amt)
{
	if (amt < 0)
		cout << "Nie mozna wplacic ujemniej kwoty; Wplata anulowana.\n";
	else
		balance += amt;
}

void Brass::Withdraw(double amt)
{
	format initalState = setFormat();
	precis prec = cout.precision(2);
	if (amt < 0)
		cout << "Nie mozna wyplacic ujemniej kwoty; Wyplata anulowana.\n";
	else if (amt <= balance)
		balance -= amt;
	else
		cout << "Zadana suma " << amt << " zl przekracza dostepne srodki.\nWyplata anulowana.\n";
	restore(initalState, prec);
}

double Brass::Balance()const
{
	return balance;
}

void Brass::ViewAcct()const
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	cout << "Klient: " << fullName << endl;
	cout << "Numer rachunku: " << accNum << endl;
	cout << "Stan konta: " << balance << " zl" << endl;
	restore(initialState, prec);
}


BrassPlus::BrassPlus(const string& s, long an, double bal, double ml, double r) : Brass(s,an,bal)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

BrassPlus::BrassPlus(const Brass& ba, double ml, double r) : Brass(ba)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

void BrassPlus::ViewAcct() const
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	Brass::ViewAcct();
	cout << "Limit debetu: " << maxLoan << " zl" << endl;
	cout << "Kwota zadluzenia: " << owesBank << " zl" << endl;
	cout.precision(3);
	cout << "Stopa oprocentowania: " << 100 * rate << "%\n";
	restore(initialState, prec);
}

void BrassPlus::Withdraw(double amt)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	double bal = Balance();
	if (amt <= bal)
		Brass::Withdraw(amt);
	else if (amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal;
		owesBank += advance * (1.0 + rate);
		cout << "Zadluzenie faktyczne: " << advance << " zl" << endl;
		cout << "Odsetki: " << advance * rate << " zl" << endl;
		Deposit(advance);
		Brass::Withdraw(amt);
	}
	else
		cout << "Przekroczono limit debetu. Operacja anulowana.\n";
	restore(initialState, prec);
}

format setFormat()
{
	return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p)
{
	cout.setf(f, std::ios_base::floatfield);
	cout.precision(p);
}