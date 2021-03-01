#include <iostream>
#include "tvfm.h"

int main()
{
	using std::cout;

	Tv s42;
	cout << "Poczatkowe ustaweinia telewizora 42\":\n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout << "\nNowe ustawienia telewizora 42\":\n";
	s42.settings();

	Remote grey;

	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	cout << "\nUstawienia telewizora 42\" po uzyciu pilota:\n";
	s42.settings();

	Tv s58(Tv::On);
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "Ustaweinia telewaziora 58\":\n";
	s58.settings();
	return 0;
}