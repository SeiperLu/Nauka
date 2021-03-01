#include <iostream>
#include <cstring>
#include "stock_12.h"

Stock12::Stock12()
{
	len = 9;
	company = new char[len + 1];
	std::strcpy(company, "bez nazwy");
	shares = 0;
	share_val = 0;
	total_val = 0;
}

Stock12::Stock12(const char* ch, long n, double pr)
{
	len = std::strlen(ch);
	company = new char[len + 1];
	std::strcpy(company, ch);
	if (n < 0)
	{
		std::cout << "Liczba udzialow nie moze byc ujemna: " << "ustalam liczbe udzialow w " << company << " na 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_total();
}

Stock12::~Stock12()
{
	delete[] company;
}

void Stock12::buy(long num, double price)
{
	if (num <0)
	{
		std::cout << "Liczba nabytych udzialow nie moze byc ujemna. Transakacja przerwana.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_total();
	}
}

void Stock12::sell(long num, double price)
{
	using std::cout;
	if (num>0)
	{
		cout << "Liczba sprzedawanych udzialow nie moze byc ujemna. Transakacja przerwana.\n";
	}
	else if (num >shares)
	{
		cout << "Nie mozesz sprzedac wiecej udzialow, nim posiadasz! Transakacja przerwana.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_total();
	}
}

void Stock12::update(double price)
{
	share_val = price;
	set_total();
}
std::ostream& operator<<(std::ostream& os, const Stock12& st)
{
	using std::ios_base;
	ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = os.precision(3);
	os << "Spolka: " << st.company << " Liczba udzialow: " << st.shares << "\n" << " Cena udzialow: " << st.share_val << " zl";
	os.precision(2);
	os << " Laczna wartosc udzialow: " << st.total_val << " zl\n";
	os.setf(orig, ios_base::floatfield);
	os.precision(prec);
	return os;
}

const Stock12& Stock12::topval(const Stock12& s)const
{
	if (s.total_val > total_val)
	{
		return s;
	}
	else
	{
		return *this;
	}
}

Stock12::Stock12(const Stock12& st)
{
	len = st.len;
	shares = st.shares;
	share_val = st.share_val;
	total_val = st.total_val;
	company = new char[len + 1];
	std::strcpy(company, st.company);
}

Stock12& Stock12::operator=(const Stock12& st)
{
	if (this == &st)
		return *this;
	delete[] company;
	len = st.len;
	company = new char[len + 1];
	std::strcpy(company, st.company);
	shares = st.shares;
	share_val = st.share_val;
	total_val = st.total_val;
	return *this;
}