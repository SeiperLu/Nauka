#include<iostream>
long int silnia(int n);
int y = 1;
int z = 0;
int main()
{
    using namespace std;
    int i;
    char ch;
    while(ch != 'N')
    {
             cout << "Dla jakiej liczby obliczyc silnie? ";
             cin >> i;
             cout << " Silnia dla liczby " << i << " wynosi " << silnia(i) << ".\n";
             cout << "Kontynuowac?(T/N) ";
             cin >> ch;
    }
    cin.get();
    cin.get();
    return 0;
}

long int silnia(int n)
{
     y = (z + 1) * y;
     z++;
     if(z < n)
     silnia(n);
     if(z == n)
     return y;
     z--;
}
      
