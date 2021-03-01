#include <iostream>
#include "stonewt1.h"

int main()
{
	using std::cout;
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;
	cout << "konwersja na typ double => ";
	cout << "Poppins: " << p_wt << " funtow.\n";
	cout << "konwersja na typ int => ";
	cout << "Poppins: " << int(poppins) << " funtow.\n";
	return 0;
}