#include <iostream>
#include <string>
#include "cw14_4.h"
#include <random>

void Gunslinger::Show() const
{
	Person::Show();
	std::cout << "Liczba naciec: " << cuts << std::endl;
	std::cout << "Czas wyciagniecia rewolweru: " << time_out << std::endl;
}

int PokerPlayer::Draw() const
{
	return std::rand() % 52 + 1;
}

void BadDude::Show() const
{
	Gunslinger::Show();
	std::cout << "Liczba losowa: " << PokerPlayer::Draw() << std::endl;
}

void Person::Set() 
{
	std::cout << "Podaj imie: ";
	std::getline(std::cin, identity);
}

void Gunslinger::Set()
{
	Person::Set();
	std::cout << "Podaj liczbe naciec: ";
	std::cin >> cuts;
	std::cout << "Podaj czas wyciagniecia rewolwera: ";
	std::cin >> time_out;
}

void PokerPlayer::Set()
{
	Person::Set();
}

void BadDude::Set()
{
	Gunslinger::Set();
}