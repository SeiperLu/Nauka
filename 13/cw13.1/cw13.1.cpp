#include "cw13.1-classic.h"
#include <cstring>
#include <iostream>
#pragma warning(disable : 4996)

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	std::strncpy(performers, s1, 49);
	std::strncpy(label, s2, 19);
	performers[49] = '\0';
	label[19] = '\0';
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::~Cd()
{

}
void Cd::Report() const
{
	std::cout << "Wykonawca: " << performers << std::endl;
	std::cout << "Plyta: " << label << std::endl;
	std::cout << "Liczba utworow: " << selections << std::endl;
	std::cout << "Czas laczny utworow: " << playtime << std::endl;
}

Cd& Cd::operator=(const Cd& d)
{
	if (&d == this)
		return *this;
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(const char* s1, const char* s2, const char* s3, int n, double x) : Cd(s2, s3, n, x)
{
	main_theme = new char[std::strlen(s1) + 1];
	std::strcpy(main_theme, s1);
}

Classic::Classic(const Classic& c) : Cd(c)
{
	main_theme = new char[std::strlen(c.main_theme) + 1];
	std::strcpy(main_theme, c.main_theme);
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "Glowny utwor: " << main_theme << std::endl;
}

Classic& Classic::operator=(const Classic& c)
{
	if (this == &c)
		return *this;
	Cd::operator=(c);
	delete[] main_theme;
	main_theme = new char[std::strlen(c.main_theme) + 1];
	std::strcpy(main_theme, c.main_theme);
	return *this;
}

Classic::~Classic()
{
	delete[] main_theme;
}