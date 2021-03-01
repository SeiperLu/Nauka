#include "port.h"
#pragma warning(disable : 4996)

Port::Port(const char* br, const char* st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strncpy(style, st, 20);
	bottles = b;
}

Port::Port(const Port& p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
	if (&p == this)
		return *this;
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
	return *this;
}

Port& Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port& Port::operator-=(int b)
{
	if (bottles >= b)
	{
		bottles -= b;
		return *this;
	}
	else
	{
		cout << "Za malo butelek!\n";
		return *this;
	}
}
void Port::Show() const
{
	cout << "Marka: " << brand << endl;
	cout << "Rodzaj: " << style << endl;
	cout << "Butelek: " << bottles << endl;
}

ostream& operator<<(ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

VintagePort::VintagePort() : Port()
{
	nickname = new char[6];
	strcpy(nickname, "Brak");
	year = 0;
}

VintagePort::VintagePort(const char* br, const char* st, int b, const char* nn, int y) :Port(br, st, b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort& vp) : Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if (&vp == this)
		return *this;
	Port::operator=(vp);
	delete[] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	cout << "Nazwa: " << nickname << endl;
	cout << "Rok produkcji: " << year << endl;
}

ostream& operator<<(ostream& os, const VintagePort& vp)
{
	os << (const Port&)vp << ", " << vp.nickname << ", " << vp.year;
	return os;
}