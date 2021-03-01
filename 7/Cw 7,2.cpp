#include<iostream>
#include<cctype>
using namespace std;
const int MAX = 10;

int wypel(double ar[], int max);
void wys(double ar[], int n, double s);
double sred(double ar[], int n);

int main()
{
    double wyniki[MAX];
    int n = wypel(wyniki, MAX);
    double y = sred(wyniki, n);
    wys(wyniki, n, y);
    cin.get();
    cin.get();
    return 0;
}

int wypel(double ar[], int max)
{
    cout << "Prosze podac 10 wynikow, liczba ujemna konczy wprowadzanie.\n";
    int i = 0;
    while (i < max)
    {
        cout << "Prosze podac " << i +1 << " wynik: ";
        if (cin >> ar[i] && ar[i] > 0)
        {
         i++;
         continue;
        }
        else if (ar[i] < 0)
        break;
    }
    return i;
}

void wys(double ar[], int n, double s)
{
     int i = 0;
     while ( i < n)
     {
           cout << ar[i] << " ";
           i++;
     }
     cout <<"\nSredni wynik: " << s <<endl;
}

double sred(double ar[], int n)
{
       double sum = 0;
       for ( int i = 0; i < n; i++)
           sum += ar[i];
       return sum / n;
}
       
     
    
