#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{

public:
	enum State { STONE, STONE_WO, STONE_W };
	Stonewt(double lbs, State form = STONE_W);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	friend std::ostream& operator<<(std::ostream& os, const Stonewt& t);
	Stonewt operator+(const Stonewt& t) const;
	Stonewt operator-(const Stonewt& t) const;
	Stonewt operator*(double m) const;
	Stonewt operator*(const Stonewt& t) const;
	
private:
	enum { Lbs_per_stone = 14 };
	State state;
	int stone;
	double pds_left;
	double pounds;
};
#endif // !STONEWT_H_


