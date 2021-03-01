#include <cstring>
#include <cctype>
#include "string2.h"
#pragma warning(disable : 4996)

using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String& st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete[] str;
}

String& String::operator=(const String& st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}

String& String::operator=(const char* s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char& String::operator[](int i)
{
	return str[i];
}

const char& String::operator[](int i)const
{
	return str[i];
}

bool operator<(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
	return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}

istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}

String String::operator+(const String& st) const
{
	String temp;
	temp.len = this->len + st.len;
	temp.str = new char[temp.len + 1];
	std::strcpy(temp.str, this->str);
	std::strcpy(temp.str + this->len, st.str);
	return temp;
}

String operator+(const char* s, const String& st)
{
	String temp;
	temp.len = std::strlen(s);
	temp.len += st.len;
	temp.str = new char[temp.len + 1];
	std::strcpy(temp.str, s);
	std::strcpy(temp.str + std::strlen(s), st.str);
	return temp;
}

void String::stringlow()
{
	for (int i = 0; i < this->len; i++)
		*(this->str+i) = tolower(*(this->str + i));
}

void String::stringup()
{
	for (int i = 0; i < this->len; i++)
		*(this->str + i) = toupper(*(this->str + i));
}

int String::HowManyChar(char ch) const
{
	int count = 0;
	for (int i = 0; i < this->len; i++)
	{
		if (*(this->str + i) == ch)
			count++;
		else
			continue;
	}
	return count;
}