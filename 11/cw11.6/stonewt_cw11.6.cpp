#include <iostream>
using std::cout;
#include "stonewt_cw11.6.h"

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stone;
	pds_left = int(lbs) % Lbs_per_stone + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stone + lbs;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{
}

void Stonewt::show_stn() const
{
	cout << stone << " kamieni, " << pds_left << " funtow\n";
}

void Stonewt::show_lbs() const
{
	cout << pounds << " funtow\n";
}

bool Stonewt::operator<(const Stonewt& t) const
{
	if (pounds < t.pounds)
		return true;
	else
	{
		return false;
	}
}

bool Stonewt::operator>(const Stonewt& t) const
{
	if (pounds > t.pounds)
		return true;
	else
	{
		return false;
	}
}

bool Stonewt::operator<=(const Stonewt& t) const
{
	if (pounds <= t.pounds)
		return true;
	else
	{
		return false;
	}
}

bool Stonewt::operator>=(const Stonewt& t) const
{
	if (pounds >= t.pounds)
		return true;
	else
	{
		return false;
	}
}

bool Stonewt::operator==(const Stonewt& t) const
{
	if (pounds == t.pounds)
		return true;
	else
	{
		return false;
	}
}

bool Stonewt::operator!=(const Stonewt& t) const
{
	if (pounds != t.pounds)
		return true;
	else
	{
		return false;
	}
}