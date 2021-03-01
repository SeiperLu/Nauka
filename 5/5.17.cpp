#include<iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    
    cout << "Podawaj znaki; znak # konczy: " <<endl;
    cin.get(ch);
    while ( ch != '#')
    {
          cout << ch;
          ++count;
          cin.get(ch);
    }
    cout << endl << "wczytano " << count << " znakow" <<endl;
    cin.get();
    cin.get();
    return 0;
}
