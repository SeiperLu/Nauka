#pragma once
#include <iostream>

template <typename T, typename F>
T use_f(T v, F f)
{
	static int count = 0;
	count++;
	std::cout << " use_f count = " << count << ", &count = " << &count << std::endl;
	return f(v);
}

class Fp
{
public:
	Fp(double z = 1.0) : z_(z) {}
	double operator()(double p) { return z_ * p; }
private:
	double z_;
};

class Fq
{
public:
	Fq(double z = 1.0) : z_(z){}
	double operator()(double q) { return z_ + q; }
private:
	double z_;
};



