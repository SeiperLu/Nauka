#include "port.h"

Port::Port(const char* br, const char* st, int b)
{
	 brand = new char[std::strlen(br + 1)];
	 std::strcpy(brand, br);
	 std::strncpy(style, st, 20);
	 bottles = b;
}

Port::Port(const Port& p)
{
	brand = new char[std::strlen(p.brand + 1)];
	std::strcpy(brand, p.brand);
	std::strcpy(style, p.style);
	bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
	if (&p == this)
		return *this;
	delete[] brand;
	brand = new char[std::strlen(p.brand + 1)];
	std::strcpy(brand, p.brand);
	std::strcpy(style, p.style);
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
		std::cout << "Niewystrczajaca liczba butelek!/n";
		return *this;
	}
}

void Port::Show()const 
{
	std::cout << "Marka: " << brand << std::endl;
	std::cout << "Rodzaj: " << style << std::endl;
	std::cout << "Butelek: " << bottles << std::endl;
}

ostream& operator<<(ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

VintagePort::VintagePort() :Port()
{
	nickname = new char[6];
	std::strcpy(nickname, "Brak");
	year = 0;
}

VintagePort::VintagePort(const char* br, const char* st, int b, const char* nm, int y) : Port(br, st, b)
{
	nickname = new char[std::strlen(nm + 1)];
	std::strcpy(nickname, nm);
	year = y;
}

VintagePort::VintagePort(const VintagePort& vp) : Port(vp)
{
	nickname = new char[std::strlen(vp.nickname + 1)];
	std::strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if (&vp == this)
		return *this;
	delete[] nickname;
	Port(vp);
	nickname = new char[std::strlen(vp.nickname + 1)];
	std::strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	std::cout << "Nazwa: " << nickname << std::endl;
	std::cout << "Rok: " << year << std::endl;
}

ostream& operator<<(ostream& os, const VintagePort& vp)
{
	os << (Port)vp << ", " << vp.nickname << ", " << vp.year;
	return os;

}