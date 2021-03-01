#include <iostream>
#include <valarray>
#include "Wine_cw_14.1.h"


void Wine::GetBottles()
{
	std::cout << "Podaj dane o winie " << label << " dla " << years << " rocznikow:\n";
	for (int i = 0; i < years; i++)
	{
		std::cout << "Podaj rocznik: ";
		std::cin >> wines.first()[i];
		std::cout << "Podaj liczbe butelek: ";
		std::cin >> wines.second()[i];
	}
	while (std::cin.get() != '\n')
		continue;
}

const std::string& Wine::Label() const
{
	return (const std::string&) label;
}

int Wine::sum() const
{
	int sum = 0;
	for (int i = 0; i < years; i++)
	{
		sum += wines.second()[i];
	}
	return sum;
}

void Wine::Show() const
{
	std::cout << "Wino: " << label << std::endl;
	std::cout << "\tRocznik  Butelki\n";
	for (int i = 0; i < years; i++)
		std::cout << "\t" << wines.first()[i] << "\t" << wines.second()[i] << std::endl;
}
