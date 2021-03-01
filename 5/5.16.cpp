#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Podawaj znaki; # konczy wprowadzanie: " <<endl;
    cin >> ch;
    while ( ch != '#')
    {
          cout << ch;
          ++count;
          cin >> ch;
    }
    cout << endl << " wczytano " << count << " znakow\n";
    cin.get();
    cin.get();
    return 0;
}
