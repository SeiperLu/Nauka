#include<iostream>
const double Ikl = 0.0;
const double IIkl = 0.10;
const double IIIkl = 0.15;
const double IVkl = 0.20;

int main()
{
    using namespace std;
    long double zarobek;
    cout << "Prosze podac ile pan/i zarobil/a : ";
    while(cin >> zarobek || zarobek < 0)
    {
                cout << "Prosze podac liczbe dodatnia: ";
                cin.clear();
                while(cin.get() != '\n')
                continue;
    }
    int x = 0;
    double pod = 0.0;
    long double  z = 0;
    while(x < 4)
    {
            if ( zarobek < 0 || zarobek == 0)
               break; 
            else if(x == 0 && zarobek <= 5000)
            {
                 pod = pod + zarobek * Ikl;
                 ++x;
                 break;
            }
            else if(x == 0 && zarobek > 5000)
            {
                 pod = pod + 5000 * Ikl;
                 ++x;
                 continue;
            }
            else if(x == 1)
            {
                 z = zarobek - 5000;
                 if(zarobek - 15000 <= 0)
                 {
                            pod = pod + z * IIkl;
                            ++x;
                            break;
                 }
                 else if(zarobek -15000 > 0)
                 {
                      pod = pod + 10000 * IIkl;
                      ++x;
                      continue;
                 }
            }
            else if (x == 2)
            {
                 z = zarobek - 15000;
                 if(zarobek - 35000 <= 0)
                 {
                            pod = pod + z * IIIkl;
                            ++x;
                            break;
                 }
                 else if(zarobek - 35000 > 0)
                 {
                      pod = pod + 20000 * IIIkl;
                      ++x;
                      continue;
                 }
            }
            else if(x == 3)
            {
                 pod = pod + (zarobek - 35000) * IVkl;
                 ++x;
            }
    }
    cout << "Naleznosc podatkowa to " << pod << ".";
    cin.get();
    cin.get();
    return 0;
}
    
            
            
            
