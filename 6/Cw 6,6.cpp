#include<iostream>
#include<cstring>
using namespace std;
struct donators
{
       string nazwisko;
       double kwota;
};


int main ()
{
    cout << "Prosze podac liczbe wplacajacych: ";
    int x;
    cin >> x;
    donators * wplywy = new donators [x];
    for(int y = 0; y < x; ++y)
    {
            cout << "Prosze podac nazwisko " << y + 1 << " sponsora: ";
            cin >> wplywy[y].nazwisko;
            cout << "Prosze podac kwote wplaty: ";
            cin >> wplywy[y].kwota;
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
                               
            
            
                 
