#include<iostream>
#include<cstring>
#include<string>
#include "golf.h"
int o = 1;
namespace golff
{
void setgolf(golf &g, const char * name, int hc)
{
     strcpy(g.fullname, name);
     g.handicap = hc;
}

void setgolf(golf & g)
{
     using namespace std;
     char name[Len];
     int i;
     cout << "Podaj imie i nazwisko: ";
     cin.getline(name, Len);
     if(strlen(name) <= 0)
     {
                     o = 0;
                     return;
     }
     cout << "Podaj handicap: ";
     cin >> i;
     setgolf(g, name, i);
     o = 1;
}

void handicap(golf & g, int hc)
{
     g.handicap = hc;
}

void showgolf(const golf & g)
{
     using namespace std;
     cout << "Imie i nawisko: " << g.fullname <<endl;
     cout << "Handicap gracza: " << g.handicap <<endl;
}
}
