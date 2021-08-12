#include <iostream>
#include <initializer_list>
#include <vector>
#include <memory>
template<typename T>
T average_list(std::initializer_list<T> t)
{

	T sum=0;
	for (auto i = t.begin(); i < t.end(); i++)
	{
		sum = sum + *i;
	}
	return sum/t.size();
}

int main()
{
	using namespace std;
	auto q = average_list({ 15.4,10.7,9.0 });
	cout << q << endl;
	cout << average_list({ 20,30,19,17,45,38 }) << endl;
	auto ad = average_list<double>({ 'A',70,68.33 });
	cout << ad << endl;
	return 0;
}