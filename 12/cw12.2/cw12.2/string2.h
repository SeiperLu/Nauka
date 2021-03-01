#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
public:
	String();
	String(const char* s);
	String(const String&);
	~String();
	int length() const { return len; }
	String& operator=(const String&);
	String& operator=(const char*);
	String operator+(const String&) const;
	char& operator[](int i);
	const char& operator[](int i) const;
	friend String operator+(const char* s, const String& st);
	friend bool operator<(const String& st, const String& st2);
	friend bool operator>(const String& st, const String& st2);
	friend bool operator==(const String& st, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);
	static int HowMany();
	void stringlow();
	void stringup();
	int HowManyChar(char ch) const;
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
};



#endif // !STRING1_H_

