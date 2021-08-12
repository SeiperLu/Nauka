#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char* argv[])
{
	using namespace std;
	if (argc == 1)
	{
		cerr << "Sk³adnia: " << argv[0] << " plik[i]\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin;
	long count;
	long total = 0;
	char ch;

	for (int file = 0; file < argc; file++)
	{
		fin.open(argv[file]);
		if (!fin.is_open())
		{
			cerr << "Nie mozna otworzyc pliku " << argv[file] << endl;
			fin.clear();
			continue;
		}
		count = 0;
		while (fin.get(ch))
			count++;
		cout << count << " znakow w pliku " << argv[file] << endl;
		total += count;
		fin.clear();
		fin.close();
	}
	cout << total << " znakow we wszystkich plikach\n";
	return 0;
}