#include <iostream>
#include "tvfm_cw15.1.h"

bool Tv::volup()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
		return false;
}

bool Tv::voldown()
{
	if (volume > MinVal)
	{
		volume--;
		return true;
	}
	else
		return false;
}

void Tv::chanup()
{
	if (channel < maxchannel)
		channel++;
	else
		channel = 1;
}

void Tv::chandown()
{
	if (channel > 1)
		channel--;
	else
		channel = maxchannel;
}

void Tv::settings() const
{
	using std::cout;
	using std::endl;

	cout << "Telewizor jest " << (state == Off ? "Wylaczony" : "Wlaczony") << endl;
	if (state == On)
	{
		cout << "Glosnosc = " << volume << endl;
		cout << "Program = " << channel << endl;
		cout << "Tryb = " << (mode == Antenna ? "antena" : "kabel") << endl;
		cout << "Wyjscie = " << (input == TV ? "TV" : "DVD") << endl;
	}
}

void Remote::show_workm()
{
	std::cout << "Tryb pracy pilota - " << (work_mode == NORMAL ? "Normalny" : "Interaktywny") << std::endl;
}

void Tv::set_workm(Remote& re)
{
	if (state == On)
		re.work_mode = (re.work_mode == Remote::NORMAL ? Remote::INTERACTIVE : Remote::NORMAL);
}