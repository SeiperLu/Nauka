#pragma once
#include<iostream>
#ifndef STOCK12_H_
#define STOCK12_H_
#pragma warning(disable : 4996)
class Stock12
{
public:
	Stock12();
	Stock12(const Stock12& st);
	Stock12(const char* ch, long n = 0, double pr = 0);
	~Stock12();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	friend std::ostream& operator<<(std::ostream& os, const Stock12& st);
	const Stock12& topval(const Stock12& s)const;
	Stock12& operator=(const Stock12& st);
private:
	char* company;
	int len;
	int shares;
	double share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }
};


#endif // !STOCK!@_H_
