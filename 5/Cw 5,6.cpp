#include<iostream>
#include<cstring>
using namespace std;
struct car
{
       string name;
       int year;
};

int main()
{
    int aut;
    cout << "Ile samochodow chcesz skatalogowac? ";
    cin >> aut;
    car * cars = new car[aut];
    for(int x = 0; x < aut; ++x)
    {
            cout << "Samochod #" << x + 1 << ":" <<endl;
            cout << "Prosze podac marke: ";
            cin.get(cars[x]->name);
            cout << "Rok produkcji: ";
            cin >> cars[x]->year;
    }
    cout << endl;
    for ( int a = 0; a < aut; ++a)
        cout << cars[a]->year << " " << cars[a]->name << endl;
    cin.get();
    cin.get();
    return 0;
}
      
            
