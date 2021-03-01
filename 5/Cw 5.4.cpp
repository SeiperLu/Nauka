#include<iostream>
#include<cstring>
const int mie = 12;
int main()
{
    using namespace std;
    const string okres[mie] = 
    {
          "Styczniu",
          "Lutym",
          "Marcu",
          "Kwietniu",
          "Maju",
          "Czerwcu",
          "Lipcu",
          "Sierpniu",
          "Wrzesniu",
          "Pazdierniku",
          "Listopadzie",
          "Grudniu" 
    };
    int sprze[mie];
    int suma = 0;
    for (int x = 0; x < mie; ++x)
    {
        cout << "Sprzedarz w " << okres[x] << ":";
        cin >> sprze[x];
        suma = suma + sprze[x];
    }
    cout << "Roczna sprzedaz wynosi: " << suma << "." <<endl;
    cin.get();
    cin.get();
    return 0;
}
        
