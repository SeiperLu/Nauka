#include <iostream>

int main()
{
	using std::cout;
	cout.fill('*');
	const char* staff[2] = { "Jan Kowalski","Joanna Nowak" };
	long bonus[2] = { 900,1200 };
	for (int i = 0; i < 2; i++)
	{
		cout << staff[i] << ": ";
		cout.width(7);
		cout << bonus[i] << "zl\n";
	}
	return 0;
}