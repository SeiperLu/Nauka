#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

const int LIM = 20;
struct planet
{
	char name[LIM];
	double population;
	double g;
};

const char* file = "planety.dat";
inline void eatline() { while (std::cin.get() != '\n') continue; }

int main()
{
	using namespace std;
	planet pl;
	cout << fixed;
	fstream finout;
	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
	int ct = 0;

	if (finout.is_open())
	{
		finout.seekg(0);
		cout << "oto aktualna zawartosc pliku " << file << ":\n";
		while (finout.read((char*)&pl,sizeof pl))
		{
			cout << ct++ << ": " << setw(LIM) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(6) << pl.g << endl;
		}
		if (finout.eof())
			finout.clear();
		else
		{
			cerr << "Blad przy probie odczytu pliku " << file << ".\n";
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		cerr << "Nie mozna otworzyc pliku " << file << " -- koniec pracy programu.\n";
		exit(EXIT_FAILURE);
	}

	cout << "Podaj numer rekordu ktory chcesz zmienic: ";
	long rec;
	cin >> rec;
	eatline();
	if (rec < 0 || rec >= ct)
	{
		cerr << "Nieprawidlowy numer rekordu -- koniec pracy programu.\n";
		exit(EXIT_FAILURE);
	}
	streampos place = rec * sizeof pl;
	finout.seekg(place);
	if(finout.fail())
	{
		cerr << "Blad podczas wyszukiwania pozycji.\n";
		exit(EXIT_FAILURE);
	}
	finout.read((char*)&pl, sizeof pl);
	cout << "Twoj wybor:\n";
	cout << rec << ": " << setw(LIM) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(6) << pl.g << endl;
	if (finout.eof())
		finout.clear();

	cout << "Podaj nazwe planety: ";
	cin.get(pl.name, LIM);
	cout << "Podaj zaludienie planety: ";
	cin >> pl.population;
	cout << "Podaj przyspieszenie grawitacyjne planety: ";
	cin >> pl.g;
	finout.seekp(place);
	finout.write((char*)&pl, sizeof pl) << flush;
	if(finout.fail())
	{
		cerr << "Blad przy probie zapisu.\n";
		exit(EXIT_FAILURE);
	}

	ct = 0;
	finout.seekg(0);
	cout << "Oto nowa zawartosc pliku " << file << ":\n";
	while (finout.read((char*)&pl, sizeof pl))
	{
		cout << ct++ << ": " << setw(LIM) << pl.name << ": " << setprecision(0) << setw(12) << pl.population << setprecision(2) << setw(6) << pl.g << endl;
	}
	finout.close();
	cout << "Koniec!\n";
	return 0;
}