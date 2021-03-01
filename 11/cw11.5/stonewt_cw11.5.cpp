
using std::cout;
#include "stonewt_cw11.5.h"

Stonewt::Stonewt(double lbs, State form)
{
	state = form;
	if (state == STONE_W || state == STONE_WO)
	{
		stone = int(lbs) / Lbs_per_stone;
		pds_left = int(lbs) % Lbs_per_stone + lbs - int(lbs);
		pounds = lbs;
	}
	else
	{
		cout << "Bledna reprezentacja wagi!\n" << "Zeruje dane.\nUstawiam reprezentacje na kamienie.\n";
		state = STONE;
	}
	
}

Stonewt::Stonewt(int stn, double lbs)
{
	state = STONE;
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stone + lbs;
}

Stonewt::Stonewt()
{
	state = STONE;
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{	
}

std::ostream& operator<<(std::ostream& os, const Stonewt& t)
{
	if (t.state == Stonewt::STONE)
	{
		os << t.stone << " kamieni, " << t.pds_left << " funtow\n";
	}
	else if (t.state == Stonewt::STONE_W)
	{
		os << t.pounds << " futnow\n";
	}
	else if (t.state == Stonewt::STONE_WO)
	{
		os << (int)t.pounds << " futnow\n";
	}
	return os;
}

Stonewt Stonewt::operator+(const Stonewt& t)const 
{
	return Stonewt(stone + t.stone, pounds + t.pounds);
}

Stonewt Stonewt::operator-(const Stonewt& t)const
{
	return Stonewt(stone - t.stone, pounds - t.pounds);
}

Stonewt Stonewt::operator*(const Stonewt& t)const
{
	return Stonewt(stone * t.stone, pounds * t.pounds);
}

Stonewt Stonewt::operator*(double m)const
{
	return Stonewt(stone *m, pounds *m);
}