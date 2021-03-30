#pragma once
#ifndef CUSTOMER_H_
#define CUSTOMER_H_
class Customer
{
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
private:
	long arrive;
	int processtime;
};


#endif // !CUSTOMER_H_
