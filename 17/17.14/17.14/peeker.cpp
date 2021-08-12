#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	char ch;
	while (cin.get(ch))
	{
		if (ch != '#')
			cout << ch;
		else
		{
			cin.putback(ch);
			break;
		}
	}

	if (!cin.eof())
	{
		cin.get(ch);
		cout << endl << ch << " to nastepny znak wejsciowy.\n";
	}
	else
	{
		cout << "Napotkano koniec pliku.\n";
		std::exit(0);
	}

	while (cin.peek() != '#')
	{
		cin.get(ch);
		cout << ch;
	}
	if (!cin.eof())
	{
		cin.get(ch);
		cout << endl << ch << " to nastepny znak wejsciowy.\n";
	}
	else
		cout << "Napotkano koniec pliku.\n";
	return 0;
}