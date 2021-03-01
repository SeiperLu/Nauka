#include<iostream>
#include "cw13.1-classic.h"
using namespace std;
void Bravo(const Cd& disk);

int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Sonata fortepianowa B-dur, Fantazja C-moll", "Alfred Brendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;
	cout << "Bezposrednie uzycie ibiektu:\n";
	c1.Report();
	c2.Report();
	cout << "Uzycie wskaznika na typ Cd:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();
	cout << "Wywolanie funkcji z argumentem w postaci referencji do typu Cd:\n";
	Bravo(c1);
	Bravo(c2);
	cout << "test przypisania: ";
	Classic copy;
	copy = c2;
	copy.Report();
	return 0;
}

void Bravo(const Cd& disk)
{
	disk.Report();
}