#include<iostream>
void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);

int main()
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;
    
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;
    cout << "Zmiana wartosci za pomoca referencji:\n";
    swapr(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;
    cout << "Zmiana wartosci za pomoca wskaznikow:\n";
    swapp(&wallet1, &wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;
    cout << "Proba zamiany przy przekazywaniu przez wartosc:\n";
    swapv(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;
    cin.get();
    cin.get();
    return 0;
}

void swapr(int & a, int & b)
{
     int temp;
     temp = a;
     a = b;
     b = temp;
}

void swapp(int * p, int * q)
{
     int temp;
     temp = *p;
     *p = *q;
     *q = temp;
}

void swapv(int a, int b)
{
     int temp;
     temp = a;
     a = b;
     b = temp;
} 
