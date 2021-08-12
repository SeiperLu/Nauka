#include <iostream>
using namespace std;

class Useless
{
public:
	Useless();
	explicit Useless(int k);
	Useless(int k, char ch);
	Useless(const Useless& f);
	Useless(Useless&& f);
	~Useless();
	Useless operator+(const Useless& f) const;
	void ShowData() const;
private:
	int n;
	char* pc;
	static int ct;
	void ShowObject() const;
};

int Useless::ct = 0;

Useless::Useless()
{
	++ct;
	n = 0;
	pc = nullptr;
	cout << "konstruktor domyslny; liczba obiektow: " << ct << endl;
	ShowObject();
}

Useless::Useless(int k) : n(k)
{
	++ct;
	cout << "konstruktor (int);  liczba obiektow: " << ct << endl;
	pc = new char[n];
	ShowObject();
}

Useless::Useless(int k,char ch) : n(k)
{
	++ct;
	cout << "konstruktor (int, char);  liczba obiektow: " << ct << endl;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = ch;
	ShowObject();
}

Useless::Useless(const Useless& f) : n(f.n)
{
	++ct;
	cout << "konstruktor kopiujacy;  liczba obiektow: " << ct << endl;
	pc = new char[n];
	for (int i = 0; i < n; i++)
		pc[i] = f.pc[i];
	ShowObject();
}

Useless::Useless(Useless&& f) : n(f.n)
{
	++ct;
	cout << "konstruktor przenoszacy;  liczba obiektow: " << ct << endl;
	pc = f.pc;
	f.pc = nullptr;
	f.n = 0;
	ShowObject();
}

Useless::~Useless()
{
	cout << "destruktor; liczba obiektow: " << --ct << endl;
	cout << "usuwany obiekt:\n";
	ShowObject();
	delete[]pc;
}

Useless Useless::operator+(const Useless& f) const
{
	cout << "Wejscie do operator+()\n";
	Useless temp = Useless(n + f.n);
	for (int i = 0; i < n; i++)
		temp.pc[i] = pc[i];
	for (int i = n; i < temp.n; i++)
		temp.pc[i] = f.pc[i - n];
	cout << "obiekt tymczasowy:\n";
	cout << "wyjscie z operator+()\n";
	return temp;
}

void Useless::ShowObject() const
{
	cout << "Liczba elementow: " << n << ", adres danych: " << (void*)pc << endl;
}

void Useless::ShowData() const
{
	if (n == 0)
		cout << "(obiekt pusty)";
	else
		for (int i = 0; i < n; i++)
			cout << pc[i];
	cout << endl;
}

int main()
{
	{
		Useless one(10, 'x');
		Useless two = one;
		Useless three(20, 'o');
		Useless four(one + three);
		cout << "obiekt 1.: ";
		one.ShowData();
		cout << "obiekt 2.: ";
		two.ShowData();
		cout << "obiekt 3.: ";
		three.ShowData();
		cout << "obiekt 4.: ";
		four.ShowData();
	}
}