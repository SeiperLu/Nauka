#include<iostream>
using namespace std;
double warming = 0.3;

void update(double dt);
void local();

int main()
{
    cout << "Globalne ocieplenie wynosi " << warming << " stopni.\n";
    update(0.1);
    cout << "Globalne ocieplenie wynosi " << warming << " stopni.\n";
    local();
    cout << "Globalne ocieplenie wynosi " << warming << " stopni.\n";
    cin.ignore();
    return 0;
}

void update(double dt)
{
     extern double warming;
     warming  += dt;
     cout << "Zwiekszam parametr ocieplenia do " << warming;
     cout << " stopni.\n";
}

void local()
{
     double warming = 0.8;
     cout << "Lokalne ocieplenie wynosi " << warming << " stopni.\n";
     cout << "Ale glbalne ma wartosc " << ::warming << " stopni.\n";
}
     
      
