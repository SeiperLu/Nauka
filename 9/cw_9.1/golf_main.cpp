#include <iostream>
#include "golf.h"

int main()
{
	using namespace std;
	golf chuj;
	setgolf(chuj, "PIzzzda", 650);
	golf naleznik;
	int i;
	i=setgolf(naleznik);
	showgolf(chuj);
	showgolf(naleznik);
	handicap(chuj, 500);
	showgolf(chuj);
	cout << i;

}