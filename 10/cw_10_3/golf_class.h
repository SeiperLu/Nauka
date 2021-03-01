#pragma once


class golf
{
public:
	golf(const char * name, int hc);
	~golf();
	golf();
	void sethandicap(int hc);
	void showgolf();


private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
};

