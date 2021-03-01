#include<iostream>
using namespace std;
const int MAX = 10;
int fill_array(double ar[], int n);
void show_array(double ar[], int n);
void reverse_array(double ar[], int n);

int main()
{
    double wyniki[MAX];
    int i;
    i = fill_array(wyniki, MAX);
    show_array(wyniki, i);
    reverse_array(wyniki, i);
    show_array(wyniki, i);
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int n)
{
    cout << "Prosze podac maksywalnie " << MAX << " wynikow, przerwac mozna wpisujac cokolwiek innego niz liczba.\n";
    int y = 0;
    while(y < MAX)
    {
        cout << y + 1 << ": ";
        if(cin >> ar[y])
        {
               y++;
               continue;
        }
        else
        {
                 cin.clear();
                 while (cin.get() != '\n')
                       continue;
                 break;
        }
    }
    return y;
}

void show_array(double ar[], int n)
{
     if (n == 0)
     cout << "Brak wynikow, zamykanie programu.";
     else
         for(int i = 0; i < n; i++)
                 cout << "Wynik " << i + 1  << " = " << ar[i] <<endl;
}

void reverse_array(double ar[], int n)
{
     double l;
     if(n % 2 == 1)
     {
          for(int i = 0; i < (n - 1) / 2; i++)
          {
                  l = ar[i];
                  ar[i] = ar[n - i - 1];
                  ar[n - i - 1] = l;
          }
     }
     else
     {
          for(int i = 0; i < n / 2; i++)
          {
                  l = ar[i];
                  ar[i] = ar[n - i - 1];
                  ar[n - i - 1] = l;
          }
     }
}
        
        
    
