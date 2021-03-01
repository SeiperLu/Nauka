#include<iostream>
#include<cstring>
#include<fstream>
#include<cstdlib>
using namespace std;
const int SIZE = 30;
struct donators
{
       string nazwisko;
       long kwota;
};


int main ()
{
    string buff; // BUFOR NA DANE
    ifstream inFile("sponsorzy.txt");
    if(!inFile.is_open())
    {
            cout << "Otwarcie pliku sponsorzy.txt nie powiodlo sie.\n";
            cout << "Program zostanie zamkniety.\n";
            exit(EXIT_FAILURE);
    }
    int x = 0;
    getline(inFile, buff); // CZYTAMY PIERWSZĄ WARTOŚĆ JAKO WARTOŚĆ X
    x = atoi(buff.c_str()); // KONWERSJA Z CHAR NA INT ZMIENNEJ STRING W STANDARDZIE C BO FUNKCJA TYLKO TAKIE STRINGI ŁYKA
    cout<<x<<" - wartosc x\n\n";
    donators * wplywy = new donators [x];
    for(int y = 0; y < x; ++y)
    {
        getline(inFile, wplywy[y].nazwisko);
        getline(inFile, buff); // CZYTAMY KWOTĘ JAKO STRING
        wplywy[y].kwota = atoi(buff.c_str()); // KONWERSJA NA LONG INT
    }
    cout << "Nasi Wspaniali Sponsorzy:\n";
    int counts = 0;
    int z = 0;
    while(z < x)
    {
            if(wplywy[z].kwota >= 10000)
            {
                    cout << wplywy[z].nazwisko << " : " << wplywy[z].kwota <<endl;
                    ++z;
                    ++counts;
            }
            else
            ++z;
    }
    if(counts == 0)
    cout << "brak\n";
    z =0;
    counts = 0;
    cout << "Nasi Sponsorzy:\n";
    while(z < x)
    {
            if(wplywy[z].kwota < 10000)
            {
                    cout << wplywy[z].nazwisko << ": " << wplywy[z].kwota <<endl;
                    ++z;
                    ++counts;
            }
            else
            ++z;
    }
    if(counts == 0)
    cout << "brak\n";
    cin.get();
    cin.get();
    return 0;
}
