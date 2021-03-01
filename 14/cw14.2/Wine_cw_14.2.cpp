#include <iostream>
#include <valarray>
#include "Wine_cw_14.2.h"


void Wine::GetBottles()  
{
	std::cout << "Podaj dane o winie " << (const std::string&) * this << " dla " << years << " rocznikow:\n";
	for (int i = 0; i < years; i++)
	{
		std::cout << "Podaj rocznik: ";
		std::cin >> PairArray::first()[i];
		std::cout << "Podaj liczbe butelek: ";
		std::cin >> PairArray::second()[i];
	}
	while (std::cin.get() != '\n')
		continue;
}

const std::string& Wine::Label() const
{
	return (const std::string&)*this;
}

int Wine::sum() const
{
	int sum = 0;
	for (int i = 0; i < years; i++)
	{
		sum += PairArray::second()[i];
	}
	return sum;
}

void Wine::Show() const
{
	std::cout << "Wino: " << (const std::string&) * this << std::endl;
	std::cout << "\tRocznik  Butelki\n";
	for (int i = 0; i < years; i++)
		std::cout << "\t" << PairArray::first()[i] << "\t" << PairArray::second()[i] << std::endl;
}
