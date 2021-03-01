#include<iostream>

int main()
{
    using namespace std;
    cout << "Podaj wartosc poczatkowa odliczania: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)
    cout << "i = " << i <<endl;
    cout << "Gotowe, bo juz i = " << i <<endl;
    cin.get();
    cin.get();
    return 0;
}
