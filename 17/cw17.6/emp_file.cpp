#include <iostream>
#include <string>
#include "emp_file.h"
#include <fstream>
#include <cstdlib>

abstr_amp::~abstr_amp()
{

}

abstr_amp::abstr_amp()
{
	fname = "Brak";
	lname = "Brak";
	job = "Brak";
}

abstr_amp::abstr_amp(const std::string& fn, const std::string& ln, const std::string& j)
{
	fname = fn;
	lname = ln;
	job = j;
}

void abstr_amp::ShowAll() const
{
	std::cout << "Imie: " << fname << std::endl;
	std::cout << "Nazwisko: " << lname << std::endl;
	std::cout << "Praca: " << job << std::endl;
}

void abstr_amp::SetAll()
{
	std::cout << "Podaj imie: ";
	std::getline(std::cin, fname);
	std::cout << "Podaj naziwsko: ";
	std::getline(std::cin, lname);
	std::cout << "Podaj prace: ";
	std::getline(std::cin, job);
}

void abstr_amp::writeall(std::ofstream& fs)
{
	fs << fname << std::endl << lname << std::endl << job << std::endl;
}

void abstr_amp::getall(std::fstream& fs)
{
	std::getline(fs, fname);
	std::getline(fs, lname);
	std::getline(fs, job);
}

std::ostream& operator<<(std::ostream& os, const abstr_amp& e)
{
	os << e.fname << " " << e.lname;
	return os;
}

employee::employee() : abstr_amp() {}

employee::employee(const std::string& fn, const std::string& ln, const std::string& j) : abstr_amp(fn, ln, j) {}

void employee::ShowAll() const
{
	abstr_amp::ShowAll();
}

void employee::SetAll()
{
	abstr_amp::SetAll();
}

void employee::writeall(std::ofstream& fs)
{
	fs << Employee << std::endl;
	abstr_amp::writeall(fs);
	fs.flush();
}

void employee::getall(std::fstream& fs)
{
	abstr_amp::getall(fs);
}

manager::manager() : abstr_amp(), inchargeof(0) {}

manager::manager(const std::string& fn, const std::string& ln, const std::string& j, int ico) : abstr_amp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_amp& e, int ico) : abstr_amp(e), inchargeof(ico) {}

manager::manager(const manager& m) : abstr_amp(m), inchargeof(m.inchargeof) {}

void manager::SetAll()
{
	abstr_amp::SetAll();
	std::cout << "Podaj ilosc podwladnych: ";
	std::cin >> inchargeof;
}

void manager::ShowAll() const
{
	abstr_amp::ShowAll();
	std::cout << "Ilosc podwladnych: " << inchargeof << std::endl;
}

void manager::writeall(std::ofstream& fs)
{
	fs << Manager << std::endl;
	abstr_amp::writeall(fs);
	fs << inchargeof << std::endl;
}

void manager::getall(std::fstream& fs)
{
	abstr_amp::getall(fs);
	fs >> inchargeof;
	fs.get();
}

fink::fink() : abstr_amp() {}

fink::fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo) : abstr_amp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_amp& e, const std::string& rpo) : abstr_amp(e), reportsto(rpo) {}

fink::fink(const fink& e) : abstr_amp(e), reportsto(e.reportsto) {}

void fink::SetAll()
{
	abstr_amp::SetAll();
	std::cout << "Podaj liczbe raportow: ";
	std::cin >> reportsto;
}

void fink::ShowAll() const
{
	abstr_amp::ShowAll();
	std::cout << "Ilosc raportow: " << reportsto << std::endl;
}

void fink::writeall(std::ofstream& fs)
{
	fs << Fink << std::endl;
	abstr_amp::writeall(fs);
	fs << reportsto << std::endl;
}

void fink::getall(std::fstream& fs)
{
	abstr_amp::getall(fs);
	std::getline(fs, reportsto);
}

highfink::highfink() : abstr_amp(), manager(), fink() {}

highfink::highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo, int ico) : abstr_amp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_amp& e, const std::string& rpo, int ico) : abstr_amp(e), manager(e, ico), fink(e, rpo) {}

highfink::highfink(const fink& f, int ico) : abstr_amp(f), manager(f, ico), fink(f) {}

highfink::highfink(const manager& m, const std::string& rpo) : abstr_amp(m), manager(m), fink(m, rpo) {}

highfink::highfink(const highfink& h) : abstr_amp(h), manager(h), fink(h) {}

void highfink::SetAll()
{
	manager::SetAll();
	std::cout << "Podaj liczbe raportow: ";
	std::cin >> fink::ReportsTo();
}

void highfink::ShowAll() const
{
	manager::ShowAll();
	std::cout << "Ilosc raportow: " << fink::ReportsTo() << std::endl;
}

void highfink::writeall(std::ofstream& fs)
{
	fs << Highfink << std::endl;
	abstr_amp::writeall(fs);
	fs << InChargeOf() << std::endl << ReportsTo() << std::endl;
}

void highfink::getall(std::fstream& fs)
{

	manager::getall(fs);
	std::getline(fs, ReportsTo());
}