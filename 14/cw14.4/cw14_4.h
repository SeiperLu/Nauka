#pragma once
#include <iostream>
#include <string>

class Person
{
public:
	Person() : identity("Brak") {}
	Person(const std::string& id) : identity(id) {}
	Person(const Person& pe) : identity(pe.identity) {}
	virtual void Show() const { std::cout << "Imie: " << identity << std::endl; }
	virtual ~Person() {}
	virtual void Set();
private:
	std::string identity;
};

class Gunslinger : virtual public Person
{
public:
	Gunslinger() : cuts(0), time_out(0) {}
	Gunslinger(int ct, double to) : cuts(ct), time_out(to) {}
	Gunslinger(const std::string& id, int ct, double to) : Person(id), cuts(ct), time_out(to) {}
	Gunslinger(const Person& pe, int ct, double to) : Person(pe), cuts(ct), time_out(to) {}
	Gunslinger(const Gunslinger& gs) : Person(gs), cuts(gs.cuts), time_out(gs.time_out) {}
	Gunslinger(const Person& pe) : Person(pe), cuts(0), time_out(0) {}
	virtual ~Gunslinger() {}
	double Draw() const { return time_out; }
	int Cuts() const { return cuts; }
	virtual void Show() const;
	void Set_TimeOut(double to) { time_out = to; }
	void Set_Cuts(int ct) { cuts = ct; }
	virtual void Set();
private:
	int cuts;
	double time_out;
};

class PokerPlayer : virtual public Person
{
public:
	PokerPlayer() : Person() {}
	PokerPlayer(const std::string& id) : Person(id) {}
	PokerPlayer(const Person& pe) : Person(pe) {}
	PokerPlayer(const PokerPlayer& pp) : Person(pp) {}
	virtual ~PokerPlayer() {}
	int Draw() const;
	void Show()const { Person::Show(); std::cout << "Liczba losowa: " << Draw() << std::endl; }
	virtual void Set();
};

class BadDude : public Gunslinger, public PokerPlayer
{
public:
	BadDude() :Person(), Gunslinger(), PokerPlayer() {}
	BadDude(const std::string& id, int ct, double to) : Person(id), Gunslinger( ct, to), PokerPlayer() {}
	BadDude(int ct, double to) : Person(), Gunslinger(ct, to), PokerPlayer() {}
	BadDude(const Person& pe, int ct, double to) : Person(pe), Gunslinger(ct, to), PokerPlayer() {}
	BadDude(const Person& pe) : Person(pe), Gunslinger(), PokerPlayer() {}
	BadDude(const Gunslinger& gs) : Person(gs), Gunslinger(gs), PokerPlayer() {}
	BadDude(const PokerPlayer& pp) : Person(pp), Gunslinger(), PokerPlayer() {}
	BadDude(const Person& pe, const Gunslinger& gs) : Person(pe), Gunslinger(gs.Cuts(), gs.Draw()), PokerPlayer() {}
	virtual ~BadDude() {}
	double Gdraw() const { return Gunslinger::Draw(); }
	int Cdraw() const { return PokerPlayer::Draw(); }
	virtual void Show() const;
	virtual void Set();
};




