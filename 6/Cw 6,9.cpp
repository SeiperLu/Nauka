#include<iostream>
#include<cstring>
#include<fstream>
#include<cstdlib>
using namespace std;
const int SIZE = 30;
struct donators
{
       string nazwisko;
       double kwota;
};


int main ()
{
    ifstream inFile;
    char filename[SIZE];
    cout << "Prosze podac nazwe pliku: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if(!inFile.is_open())
    {
            cout << "Otwarcie pliku " << filename << " nie powiodlo sie.\n";
            cout << "Program zostanie zamkniety.\n";
            exit(EXIT_FAILURE);
    } 
    int x;
    inFile >> x;
    donators * wplywy = new donators [x];
    for(int y = 0; y < x; ++y)
    {
            getline(inFile,wplywy[y].nazwisko);
            inFile >> wplywy[y].kwota;
    }
    cout << "Nasi Wspaniali Sponsorzy:\n";
    int counts = 0;
    int z = 0;
    while(z < x)
    {
            if(wplywy[z].kwota >= 10000)
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
                               
            
            
