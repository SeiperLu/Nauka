#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <vector>



int main()
{
	using std::string;
	using std::cout;
	using std::cin;
	using std::tolower;
	using std::endl;
	using std::vector;
	vector<string> wordlist;
	std::ifstream file;
	file.open("D:/Projekty/16/cw16.3/Debug/wordslist.txt");
	string word;
	while (file >> word)
	{
		cout << "W pelti";
		cout << word << endl;
		wordlist.push_back(word);
	}
	file.close();
	int NUM = wordlist.size();



	std::srand(std::time(0));
	char play;
	cout << "Czy chcesz zagrac w gre slowna? <t/n> ";
	cin >> play;
	play = tolower(play);
	while (play == 't')
	{
		string target = wordlist[std::rand() % NUM];
		int length = target.length();
		string attempt(length, '_');
		string badchars;
		int guesses = 6;
		cout << "Zgadnij moje sekretne slowo. Ma ono " << length << " liter. Mozesz zgadywac\npo jednej literze naraz. Mozesz pomylic sie " << guesses << " razy.\n";
		cout << "Twoje slowo: " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Zgadnij litere: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
			{
				cout << "Ta litera juz byla. Sprobuj innej.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "Nie ma takiej litery!\n";
				--guesses;
				badchars += letter;
			}
			else
			{
				cout << "Poprawna litera!\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "Twoje slowo: " << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Niepoprawne litery; " << badchars << endl;
				cout << "Mozesz pomylic sie jeszcze " << guesses << " razy\n";
			}
		}
		if (guesses > 0)
			cout << "To juz cale slowo!\n";
		else
			cout << "Niestety, to slowo to " << target << ".\n";
		cout << "Czy chcesz zagrac jeszcze raz? <t/n>";
		cin >> play;
		play = tolower(play);
	}

	cout << "Koniec!\n";
	return 0;
}