#include <iostream>
#include <string>

class Person
{
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const std::string & ln, const char* fn = "HejTy");
	~Person();
	void show() const;
	void FormalShow() const;


private:
	static const int LIMIT = 256;
	std::string lname;
	char fname[LIMIT];
};

Person::Person()
{
}

Person::~Person()
{
}