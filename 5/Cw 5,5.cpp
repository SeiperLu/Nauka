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
    int sprze[3][mie];
    int suma[3] = {0,0,0};
    for ( int x = 0; x < 3; ++x)
    {
        cout << "Sprzedaz w " << x +1 << " roku." <<endl;
        for ( int a = 0; a < mie; ++a)
        {
            cout << "Sprzedaz w " << okres[a] << ":";
            cin >> sprze[x][a];
            suma[x] = suma[x] + sprze[x][a];
        }
    }
    cout << "Sprzedaz w roku 1: " << suma[0] << endl;
    cout << "Sprzedaz w roku 2: " << suma[1] << endl;
    cout << "Sprzedaz w roku 3: " << suma[2] << endl;
    cout << "Sprzedaz z calych 3 lat: " << suma[0]+suma[1]+suma[2] << "." <<endl;
    cin.get();
    cin.get();
    return 0;
}
        
