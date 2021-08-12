#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	using std::ios_base;
	int temperature = 26;

	cout << "Dzisiejsza temperatura wodu: ";
	cout.setf(ios_base::showpos);
	cout << temperature << endl;

	cout << "Dla naszych znajomych programistow bedzie to\n";
	cout << std::hex << temperature << endl;
	cout.setf(ios_base::uppercase);
	cout.setf(ios_base::showbase);
	cout << "lub\n" << temperature << endl;

	cout << "Jakie to prawdziwe (czyli " << true << ")! ojej -- Jakie to prawdziwe (czyli ";
	cout.setf(ios_base::boolalpha);
	cout << true << ")!\n";
	return 0;
}