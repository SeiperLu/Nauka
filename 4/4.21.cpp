#include<iostream>
struct inf
{
       char name[20];
       float volume;
       double price;
};

int main()
{
    using namespace std;
    inf * ps = new inf;
    cout << "Podaj nazwe dmuchanej zabawki: ";
    cin.get(ps->name, 20);
    cout << "Podaj objetosc w stopach szesciennych: ";
    cin >> (*ps).volume;
    cout << "Podaj cene w (zl): ";
    cin >> ps->price;
    cout << "Nazwa: "  << (*ps).name <<endl;
    cout << "Ojetosc: " << ps->volume << " stop szesciennych" <<endl;
    cout << "Cena: " << ps->price <<endl;
    delete ps;
    cin.get();
    cin.get();
    return 0;
}
