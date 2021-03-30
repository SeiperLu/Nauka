#include <iostream>
#include <vector>
#include <algorithm>
std::vector<int> Lotto(int pool_count, int random_count);


int main()
{
	using std::cout;
	using std::cin;
	cout << "Podaj liczbe pol: ";
	int poll_count;
	cin >> poll_count;
	cout << "Podaj liczbe wybieranych liczb: ";
	int count_of_numbers;
	cin >> count_of_numbers;
	std::vector<int> winners;
	winners = Lotto(poll_count, count_of_numbers);
	std::ostream_iterator<int, char> out(cout, " ");
	cout << "Zwycieskie liczby: ";
	std::copy(winners.begin(), winners.end(), out);
	return 0;
}

std::vector<int> Lotto(int pool_count, int random_count)
{
	std::vector<int> temp;
	for (int i = 1; i <= pool_count; i++)
		temp.push_back(i);
	std::random_shuffle(temp.begin(), temp.end());
	temp.resize(random_count);
	return temp;
}

