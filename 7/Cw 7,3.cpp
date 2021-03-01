#include<iostream>
using namespace std;
struct pudlo
{
       char producent[40];
       float wysokosc;
       float szerokosc;
       float dlugosc;
       float objetosc;
};

void wys(pudlo * n);
void obje(pudlo * n);
void wyp(pudlo * n);

int main()
{
    pudlo karton;
    wyp(&karton);
    obje(&karton);
    wys(&karton);
    cin.get();
    cin.get();
    return 0;
}

void wys(pudlo * n)
{
     cout << "Karton firmy " << n->producent << " ma wymiary " << n->wysokosc << "x";
     cout << n->szerokosc << "x" << n->dlugosc << " a jego objetosc wynosi " << n->objetosc <<endl;
}

void obje(pudlo * n)
{
     n->objetosc = n->wysokosc * n->szerokosc * n->dlugosc;
}

void wyp(pudlo * n)
{
     cout << "Prosze podac nazwe producenta: ";
     cin.getline(n->producent, 40);
     cout << "Wysokosc: ";
     cin >> n->wysokosc;
     cout << "Szerokosc: ";
     cin >> n->szerokosc;
     cout << "Dlugosc: ";
     cin >> n->dlugosc;
}
     
     
    


       
