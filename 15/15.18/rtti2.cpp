#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

class Grand
{
public:
	Grand(int h = 0) : hold(h) {}
	virtual void Speak() const { cout << "Jestem klasa Grand!\n"; }
	virtual int Value() const { return hold; }
private:
	int hold;
};

class Superb : public Grand
{
public:
	Superb(int h = 0) : Grand(h) {}
	void Speak() const { cout << "Jestem klasa Superb!!\n"; }
	virtual void Say() const { cout << "Przechowuje wartosc klasy Superb, ktora wynosi " << Value() << "!\n"; }
};

class Magnificent : public Superb
{
public:
	Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) {}
	void Speak() const { cout << "Jestem klasa Magnificent!!\n"; }
	void Say() const { cout << "Przechowuje znak " << ch << " oraz liczbe " << Value() << "!\n"; }
private:
	char ch;
};

Grand* GetOne();

int main()
{
	srand(time(0));
	Grand* pg;
	Superb* ps;
	for (int i = 0; i < 5; i++)
	{
		pg = GetOne();
		cout << "Teraz przetwarzam obiekt typu " << typeid(*pg).name() << ".\n";
		pg->Speak();
		if (ps = dynamic_cast<Superb*>(pg))
			ps->Say();
		if (typeid(Magnificent) == typeid(*pg))
			cout << "Tak, rzeczywiscie jestes wspaniala.\n";
	}
	return 0;
}

Grand* GetOne()
{
	Grand* p = nullptr;
	switch (rand()%3)
	{
	case 0:
		p = new Grand(rand() % 100);
		break;
	case 1:
		p = new Superb(rand() % 100);
		break;
	case 2:
		p = new Magnificent(rand() % 100, 'A' + rand() % 26);
		break;
	default:
		break;
	}
	return p;
}