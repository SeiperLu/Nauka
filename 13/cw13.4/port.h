#pragma once
#ifndef PORT_H_
#define PORT_H_
#include <iostream>
using namespace std;
class Port
{
public:
	Port(const char* br = "Brak", const char* st = "Brak", int b = 0);
	Port(const Port& p);
	virtual ~Port() { delete[]brand; }
	Port& operator=(const Port& p);
	Port& operator +=(int b);
	Port& operator -=(int b);
	int BottleCount()const { return bottles; }
	virtual void Show() const;
	friend ostream& operator<<(ostream& os, const Port& p);
private:
	char* brand;
	char style[20];
	int bottles;
};

class VintagePort : public Port
{
public:
	VintagePort();
	VintagePort(const char* br, const char* st, int b, const char* nn, int y);
	VintagePort(const VintagePort& vp);
	~VintagePort() { delete[] nickname; }
	VintagePort& operator=(const VintagePort& vp);
	void Show() const;
	friend ostream& operator<<(ostream& os, const VintagePort& vp);
private:
	char* nickname;
	int year;
};



#endif // !PORT_H_

