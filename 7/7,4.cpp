#include<iostream>
long double probability(unsigned numbers, unsigned picks);
void wylicz(void);
using namespace std;

int main()
{
    char ch;
    long double szliczb, szdliczby;
    long double swygranej;
    while(ch =='T')
    {
             wylicz();
             swygranej = szliczb * szdliczby;
             cout << "Szansa wygranej to jeden do " << swygranej <<endl;
             cout << "Kontynuowac?(T/N) ";
             cin >> ch;
             if (ch == 'T')
             continue;
             else if (ch == 'N')
             break;
    }  
    cin.get();
    cin.get();
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
     long double result = 1.0;
     long double n;
     unsigned p;
     
     for (n = numbers, p = picks; p > 0; n--, p--)
     result = result * n / p;
     return result;
}

void wylicz(void)
{
     int x, y;
     cout << "Prosze podac liczbe najwieksza liczbe jaka mozna wybrac oraz liczbe skreslen: ";
     cin >> x >> y;
     szliczb = probability(x, y);
     y = 1;
     cout << "Z ilu liczb mozna wybrac dodatkowa liczbe?: ";
     cin >> x;
     szdliczby = probability(x, y);
}
     
