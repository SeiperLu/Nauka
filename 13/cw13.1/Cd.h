#ifndef CD_H_
#define CD_H_
class Cd
{
public:
	Cd(const char* s1,const char* s2, int n, double x);
	Cd(const Cd& d);
	virtual ~Cd();
	virtual void Report() const;
	Cd& operator=(const Cd& d);
private:
	char performers[50];
	int selections;
	char label[20];
	double playtime;
};
#endif // !CD_H_
#pragma once
