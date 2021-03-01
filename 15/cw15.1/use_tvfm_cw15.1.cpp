#include <iostream>
#include "tvfm_cw15.1.h"

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
	grey.show_workm();
	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	s42.set_workm(grey);
	cout << "\nUstawienia telewizora 42\" po uzyciu pilota:\n";
	s42.settings();
	grey.show_workm();

	Tv s58(Tv::On);
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "Ustaweinia telewaziora 58\":\n";
	s58.settings();
	grey.show_workm();
	return 0;
}