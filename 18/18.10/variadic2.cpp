#include <iostream>
#include <string>

void show_list(){}

template<typename T>
void show_list(const T& value)
{
	std::cout << value << "\n";
}

template<typename T, typename... Args>
void show_list(const T& value, const Args&... args)
{
	std::cout << value << ", ";
	show_list(args...);
}

int main()
{
	int n = 14;
	double x = 2.71828;
	std::string mr = "Mosci String tez!";
	show_list(x, n);
	show_list(x * x, '!', 7, mr);
	return 0;
}