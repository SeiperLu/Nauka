#include <iostream>
#include "stonewt_cw11.6.h"
using std::cout;

int main()
{
	Stonewt stone[6]{ {20,5},{5,7},{30,10} };
	double lbs;
	for (int i = 0; i < 3; i++)
	{
		cout << "Podaj wage w funtach: ";
		std::cin >> lbs;
		stone[i + 3] = Stonewt(lbs);
	}
	int ind_min = 0;
	int ind_max = 0;
	int more_11 = 0;
	Stonewt coparsion{ 11,0 };
	for (int i = 0; i <=5; i++)
	{
		if (stone[i] < stone[ind_min])
			ind_min = i;
		if (stone[i] > stone[ind_max])
			ind_max = i;
		if (stone[i]>=coparsion)
		{
			more_11++;
		}
	}
	cout << "Indek najmnijezego: " << ind_min << std::endl << "Stone[" << ind_min << "]: ";
	stone[ind_min].show_lbs();
	cout << "Indek najwiekszego: " << ind_max << std::endl << "Stone[" << ind_max << "]: ";
	stone[ind_max].show_lbs();
	cout << "Liczba obiektow wiekszych niz 11: " << more_11 << std::endl;
	return 0;
}