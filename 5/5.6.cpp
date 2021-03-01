#include<iostream>
#include<cstring>

int main()
{
    using namespace std;
    cout << "Podaj wyraz: ";
    string wyr;
    cin >> wyr;
    for ( int i = wyr.size() - 1; i >= 0; i--)
        cout << wyr[i];
    cout << "\nDo widzenia. \n";
    cin.get();
    cin.get();
    return 0;
} 
