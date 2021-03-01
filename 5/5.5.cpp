#include<iostream>

int main()
{
using namespace std;
cout << "Podaj liczbe calkowita: ";
int by;
cin >> by;
for (int i = 0; i < 100; i = i + by)
    cout << i <<endl;
cin.get();
cin.get();
return 0;
} 
