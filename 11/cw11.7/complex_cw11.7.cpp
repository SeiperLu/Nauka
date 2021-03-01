#include <iostream>
using namespace std;
#include "complex0_cw11.7.h";

int main()
{
	complex a(3.0, 4.0);
	complex c;
	cout << "Podaj liczbe zespolona k aby zakonczyc:\n";
	while (cin>>c)
	{
		cout << "c to " << c << endl;
		cout << "sprzezone z c to " << ~c << endl;
		cout << "a to " << a << endl;
		cout << "a + c wynosi " << a + c << endl;
		cout << "a - c wynosi " << a - c << endl;
		cout << "a * c wynosi " << a * c << endl;
		cout << "2 * c wynosi " << 2 * c << endl;
		cout << "Podaj liczbe zespolona k aby zakonczyc:\n";
	}
	cout << "Gotowe!";
	return 0;
}