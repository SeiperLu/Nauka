#include <iostream>
#include <string>

using namespace std;
int DLUGOSC = 20;

struct Batonik
{
	string marka;
	double waga;
	int kalorie;
};
void wypelnienie(Batonik& p, const char* marka = "Millenium Munch", double waga = 2.85, int kalorie = 350);
void show(Batonik& p);
int main()
{
	char* ch = new char[DLUGOSC];
	cout << "Podaj nazwe: ";
	cin.get(ch, DLUGOSC);
	cout << "Waga: ";
	double waga;
	cin >> waga;
	cout << "Kalorie: ";
	int kalorie;
	cin >> kalorie;
	Batonik snikers;
	Batonik mars;
	wypelnienie(snikers, ch, waga, kalorie);
	wypelnienie(mars);
	show(snikers);
	show(mars);
	return 0;
}

void wypelnienie(Batonik& p, const char* marka, double waga, int kalorie)
{
	p.waga = waga;
	p.kalorie = kalorie;
	int i = 0;
	while (*(marka + i) != '\0')
	{
		p.marka += *(marka + i);
		i++;
	}
}

void show(Batonik& p)
{
	cout << p.marka << endl << p.waga << endl << p.kalorie << endl;
}