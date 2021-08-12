#include <iostream>
static long double sum;
void sum_values()
{
}

template <typename T, typename... Args>
long double sum_values(T value, Args... args)
{
	sum += value;
	sum_values(args...);
	return sum;
}


int main()
{
	std::cout << "Wartosci int: " << sum_values(5, 8, 10, 15, 20) << std::endl;
	sum = 0;
	std::cout << "Wartosci double: " << sum_values(10.5, 15.7, 20.8) << std::endl;
	sum = 0;
	std::cout << "Wartosci char: " << sum_values('A', 'B', 'C') << std::endl;
	sum = 0;
	std::cout << "Wartosci mieszane: " << sum_values(10.5, 15, 'C') << std::endl;
	sum = 0;
	return 0;
}