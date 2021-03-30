#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <algorithm>

int main()
{
	using namespace std;
	vector<int> vi0(10000000, rand());
	vector<int> vi(vi0);
	list<int> li(vi0.begin(),vi0.end());
	clock_t start = clock();
	sort(vi.begin(),vi.end());
	clock_t end = clock();
	double vi_sort_time = (double)(end - start) / CLOCKS_PER_SEC;
	start = clock();
	li.sort();
	end = clock();
	double li_sort_time = (double)(end - start) / CLOCKS_PER_SEC;
	li.assign(vi0.begin(),vi0.end());
	start = clock();
	vi.assign(li.begin(), li.end());
	sort(vi.begin(), vi.end());
	li.assign(vi.begin(), vi.end());
	end = clock();
	double copy_sort_copy = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "Czas sortowania vectora: " << vi_sort_time << endl;
	cout << "Czas sortowania listy: " << li_sort_time << endl;
	cout << "Czas kopiownaia listy do vectora sortowania i kopiowania z powrotem: " << copy_sort_copy << endl;
	return 0;
}