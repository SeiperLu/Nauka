#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

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
	void Speak() const { cout << "jestem klasa Superb!\n"; }
	virtual void Say() const { cout << "Przechowuje wartosc klasy Superb, ktora wynosi " << Value() << "!\n"; }
};

class Magnificent : public Superb
{
public:
	Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) {}
	void Speak() const { cout << "Jestem klasa Magnificent!!!\n"; }
	void Say() const { cout << "Przechowuje znak " << ch << " oraz liczbe " << Value() << "!\n"; }
private:
	char ch;
};

Grand* GetOne();

int main()
{
	std::srand(std::time(0));
	Grand* pg;
	Superb* ps;
	for (int i = 0; i < 5; i++)
	{
		pg = GetOne();
		pg->Speak();
		if (ps = dynamic_cast<Superb*>(pg))
			ps->Say();
	}
	return 0;
}

Grand* GetOne()
{
	Grand* p = nullptr;
	switch (std::rand()%3)
	{
	case 0: 
		p = new Grand(std::rand() % 100);
		break;
	case 1:
		p = new Superb(std::rand() % 100);
		break;
	case 2:
		p = new Magnificent(std::rand() % 100, 'A' + std::rand() % 26);
		break;
	}
	return p;
}


