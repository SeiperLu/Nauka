#include <iostream>
#include <string>

class Bank_Account
{
	
public:
	Bank_Account();
	Bank_Account(std::string name, int number, double cash);
	~Bank_Account();
	void show();
	void Inncom(double x);
	void Lost(double x);
private:
	std::string Owner;
	int Account_Numbert;
	double Saldo;

};

Bank_Account::Bank_Account()
{
	Owner = "Brak w³aœciciela!";
	Account_Numbert = 0;
	Saldo = 0;
}

Bank_Account::Bank_Account(std::string name, int number, double cash)
{
	Owner = name;
	Account_Numbert = number;
	Saldo = cash;
}

Bank_Account::~Bank_Account()
{
}

void Bank_Account::show()
{
	using std::cout;
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	std::cout << "W³aœciciel konta: " << Owner << std::endl;
	std::cout << "Numer konta: " << Account_Numbert << std::endl;
	cout.precision(2);
	std::cout << "Saldo: " << Saldo << std::endl;
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
		
}

void Bank_Account::Inncom(double x)
{
	if (x < 0)
		std::cout << "B³êdna wartoœæ!"<< std::endl;
	else
	{
		Saldo += x;
	}
}
void Bank_Account::Lost(double x)
{
	if (x < 0)
		std::cout << "B³êdna wartoœæ!" << std:: endl;
	else
	{
		Saldo -= x;
	}
}

int main()
{
	using namespace std;
	Bank_Account Mirek;
	Bank_Account Jan{ "Jan Melka", 1515151, 200000 };
	cout << "Konto #1:" << endl;
	Mirek.show();
	cout << "Konto #2:" << endl;
	Jan.show();
	Mirek = Bank_Account{ "Mirek len",544564,300000 };
	Jan.Inncom(2000.50);
	cout << "Konto #1:" << endl;
	Mirek.show();
	cout << "Konto #2:" << endl;
	Jan.show();
	Mirek.Lost(300.60);
	cout << "Konto #1:" << endl;
	Mirek.show();
	return 0;
}