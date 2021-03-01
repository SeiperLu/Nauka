#include "complex0_cw11.7.h"

complex::complex()
{
	Real = 0;
	Imagi = 0;
}

complex::complex(double R, double I)
{
	Real = R;
	Imagi = I;
}

complex::~complex()
{

}

complex complex::operator+(const complex& t) const
{
	complex result;
	result.Real = Real + t.Real;
	result.Imagi = Imagi + t.Imagi;
	return result;
}

complex complex::operator-(const complex& t) const
{
	complex result;
	result.Real = Real - t.Real;
	result.Imagi = Imagi - t.Imagi;
	return result;
}

complex complex::operator*(const complex& t) const
{
	complex result;
	result.Real = (Real * t.Real) - (Imagi * t.Imagi);
	result.Imagi = (Real * t.Imagi) + (Imagi * t.Real);
	return result;
}

complex complex::operator*(double m) const
{
	complex result;
	result.Real = Real + m;
	result.Imagi = Imagi + m;
	return result;
}

complex complex::operator~() const
{
	complex result;
	result.Real = Real;
	result.Imagi = -Imagi;
	return result;
}

complex operator*(double m, const complex& t)
{
	complex result;
	result.Real = t.Real * m;
	result.Imagi = t.Imagi * m;
	return result;
}

std::ostream& operator<<(std::ostream& os, const complex& t)
{
	os << "(" << t.Real << "," << t.Imagi << "i)";
	return os;
}
bool operator>>(std::istream& os, complex& t)
{
	double k;
	cout << "sk³adowa rzeczywista: ";
	std::cin >> k;
	if (std::cin.fail())
		return false;
	t.set_Real(k);
	cout << "skladow aurojona: ";
	std::cin >> k;
	if (std::cin.fail())
		return false;
	t.set_Imagi(k);
	return true;
}

void complex::set_Real(double t)
{
	Real = t;
}

void complex::set_Imagi(double t)
{
	Imagi = t;
}
