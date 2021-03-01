#ifndef CW13_1_CLASSIC_H_
#define CW13_1_CLASSIC_H_
#include "Cd.h"
class Classic : public Cd
{
public:
	Classic(const char* s1 = "Brak", const char* s2 = "Brak",const char* s3 = "Brak", int n=0, double x=0);
	Classic(const Classic& c);
	~Classic();
	void Report() const;
	Classic& operator=(const Classic& c);
private:
	char* main_theme;
};


#endif // !CW13.1-CLASSIC_H_

#pragma once
