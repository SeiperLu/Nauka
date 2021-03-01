#include <iostream>
#include "stock_12.h"
#pragma warning(disable : 4996)

const int STKS = 4;
int main()
{
	Stock12 stocks[STKS] = { Stock12("NanoSmart",12,20.0),Stock12("BurakPOL",200,2.0),Stock12("GruzPOL",130,3.25),Stock12("FutroPOL",60,6.5) };
	std::cout << "Portfel inwestycyjny:\n";
	int st;
	for (st = 0; st < STKS; st++)
		std::cout << stocks[st];
	const Stock12* top = &stocks[0];
	for (st = 0; st < STKS; st++)
		top = &top->topval(stocks[st]);
	std::cout << "\nNajbardziej wartosciowy pakiet:\n" << *top;
	return 0;
}