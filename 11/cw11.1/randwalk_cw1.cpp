#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include "D:\Projekty\11\11.13-14\vect.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step(0.0, 0.0);
	Vector result(0.0, 0.0);

	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream pout;
	pout.open("marsz.txt");
	int i = 0;
	cout << "Podaj dystans do przejscia, k aby zakonczyc: ";
	while (cin >> target)
	{
		cout << "Podaj dlugosc kroku: ";
		if (!(cin >> dstep))
			break;
		pout << "Dystans do przejscia: " << target << ", dlugosc kroku: " << dstep << endl;
		pout << i << ": " << result << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			i++;
			pout << i << ": " << result << endl;

		}
		pout << "Po " << steps << " krokach delikwent osisgnalpolozenie:\n";
		pout << result << endl;
		result.polar_mode();
		pout << "czyli\n" << result << endl;
		pout << "Srednia dlugosc kroku pozornego = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Podaj dystans do przejscia, k aby zakonczyc: ";
	}
	cout << "Koniec!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}