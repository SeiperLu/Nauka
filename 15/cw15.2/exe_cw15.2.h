#pragma once
#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_
#include <iostream>
#include <stdexcept>
#include <string>

class bad_hmean : public std::logic_error
{
public:
	bad_hmean(double a = 0, double b = 0, const std::string &s = "B³¹d w funkcji hmean.\n" ) :logic_error(s), v1(a), v2(b) {}
	const char* what() const;
private:
	double v1;
	double v2;
};

inline const char* bad_hmean::what() const
{
	std::cout << "hmean(" << v1 << ", " << v2 << "): niepoprawne argumenty: a = -b\n";
	return std::logic_error::what();
}

class bad_gmean : public std::logic_error
{
public:
	double v1;
	double v2;
	bad_gmean(double a = 0, double b = 0, const std::string & s = "B³¹d w funkcji gmean.\n") : logic_error(s), v1(a), v2(b) {}
	const char* what() const;
};

inline const char* bad_gmean::what() const
{
	std::cout  << "Argumenty funkcji gmean() powinny byc >=0\n";
	return std::logic_error::what();
}
#endif // !EXC_MEAN_H_
#pragma once
