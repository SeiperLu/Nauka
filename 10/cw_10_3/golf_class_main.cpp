#include <iostream>
#include "golf_class.h"
int main()
{
	using namespace std;
	golf chuj{ "PIzzzda", 650 };
	golf naleznik;
	chuj.showgolf();
	naleznik.showgolf();
	chuj.sethandicap(500);
	chuj.showgolf();
	
}
