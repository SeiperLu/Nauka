#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    string imie;
    string nazwisko;
    int ocena;
    int wiek;
    
    cout << "Jak masz na imie?: ";
    getline(cin,imie);
    cout << "Jak sie nazywasz?: ";
    cin >> nazwisko;
    cout << "Na jaka ocene zaslugujesz?: ";
    cin >> ocena;
    cout << "Ile masz lat?: ";
    cin >> wiek;
    cout << "Nazwisko: " << nazwisko << ", " << imie <<endl;
    cout << "Ocena: " << ocena -1 <<endl;
    cout << "Wiek: " << wiek <<endl;
    cin.get();
    cin.get();
    return 0;
}
    
    
