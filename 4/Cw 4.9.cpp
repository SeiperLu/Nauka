#include<iostream>
#include<cstring>

using namespace std;
struct batonik
{
       string nazwa;
       double kalorie;
       int waga;
};

int main()
{
    batonik * ps = new batonik [3];
    ps->nazwa = "Kit Kat";
    cout << ps->nazwa;
    ps->nazwa[1] = "Snikers";
    cout << ps->nazwa[1];
    cin.get();
    cin.get();
    return 0;
}
         
