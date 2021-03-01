#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include<iostream>
using std::cout;
class complex
{
public:
	complex();
	complex(double R, double I);
	~complex();
	complex operator+(const complex& t) const;
	complex operator-(const complex& t) const;
	complex operator*(const complex& t) const;
	complex operator*(double m) const;
	complex operator~() const;
	friend complex operator*(double m,const complex& t);
	friend std::ostream& operator<<(std::ostream& os, const complex& t);
	friend bool operator>>(std::istream& os, complex& t);
	void set_Real(double t);
	void set_Imagi(double t);
private:
	double Real;
	double Imagi;		 
};







#endif // !COMPLEX0_H_


