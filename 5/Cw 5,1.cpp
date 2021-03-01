#include<iostream>
int main()
{
    using namespace std;
    int one, two, suma;
    cout << "Prosze podac dwie liczby calkowite.\n" << "Pierwsza liczba: ";
    cin >> one;
    cout << "Druga liczba: ";
    cin >> two;
    suma = one;
    for (one < two)
    {
        ++one;
        suma = suma + one;
    }
    cout << suma;    
    cin.get();
    cin.get();
    return 0;
}
