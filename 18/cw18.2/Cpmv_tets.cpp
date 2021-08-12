#include "cpmv.h"
#include <iostream>

int main()
{
	using namespace std;
	Cpmv one;
	Cpmv two("123", "456");
	Cpmv three(two);
	cout << "One:\n";
	one.Display();
	cout << "Two:\n";
	two.Display();
	cout << "Three:\n";
	three.Display();
	Cpmv four = move(two);
	cout << "Two:\n";
	two.Display();
	cout << "Four:\n";
	four.Display();
	Cpmv five;
	five = three;
	cout << "Five:\n";
	five.Display();
	cout << "Three:\n";
	three.Display();
	Cpmv six;
	six = move(five);
	cout << "Six:\n";
	six.Display();
	cout << "Five:\n";
	five.Display();
	Cpmv seven = three + six;
	cout << "Dodawanie:\n";
	seven.Display();

	return 0;
}