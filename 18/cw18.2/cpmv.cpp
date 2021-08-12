#include "cpmv.h"
#include <iostream>

Cpmv::Cpmv()
{
	std::cout << "Konstruktor domyslny!\n";
	pi = new Info;
	pi->qcode.assign("Brak");
	pi->zcode.assign("Brak");
}

Cpmv::Cpmv(std::string q, std::string z)
{
	std::cout << "Konstruktor z parametrami!\n";
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv& cp)
{
	std::cout << "Konstruktor kopiujacy!\n";
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
}

Cpmv::Cpmv(Cpmv&& mv)
{
	std::cout << "Konstruktor przenoszacy!\n";
	pi = mv.pi;
	mv.pi = nullptr;
}

Cpmv& Cpmv::operator=(const Cpmv& cp)
{
	std::cout << "Kopiujacy operator przypisania.\n";
	if (this == &cp)
		return *this;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	return *this;
}

Cpmv& Cpmv::operator=(Cpmv&& mc)
{
	std::cout << "Przenoszacy operator przypisania.\n";
	if (this == &mc)
		return *this;
	pi = mc.pi;
	mc.pi = nullptr;
	return *this;
}

Cpmv Cpmv::operator+(const Cpmv& obj) const
{
	std::cout << "Operator dodajacy.\n";
	return Cpmv(pi->qcode + obj.pi->qcode, pi->zcode + obj.pi->zcode);
}

void Cpmv::Display()const
{
	if (&pi->qcode == nullptr)
	{
		std::cout << "Brak wartosci:\n";
		return;
	}
	std::cout << "Wartosc qcode: " << pi->qcode << "\n";
	std::cout << "Wartosc zcode: " << pi->zcode << "\n";
}

Cpmv::~Cpmv()
{

}