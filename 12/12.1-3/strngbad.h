#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_

class StringBad
{
public:
	StringBad();
	StringBad(const char* s);
	~StringBad();
	friend std::ostream& operator<<(std::ostream& os, const StringBad& st);
private:
	char* str;
	int len;
	static int num_strings;
};


#endif // !STRNGBAD_H_
