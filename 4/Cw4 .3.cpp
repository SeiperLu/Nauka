#include<iostream>
#include<cstring>

int main()
{
    using namespace std;
    char imie[20];
    char nazwisko[20];
    cout << "Podaj imie: ";
    cin.getline(imie,20);
    cout << "Podaj nazwisko: ";
    cin.getline(nazwisko,20);
    string imie2, nazwisko2, wszystko;
    imie2 = imie;
    nazwisko2 = nazwisko;
    wszystko = imie2;
    wszystko += ", ";
    wszystko += nazwisko2;
    cout << "Oto informacje zestawione w jeden napis: " <<wszystko;
    cin.get();
    cin.get();
    return 0;
}
