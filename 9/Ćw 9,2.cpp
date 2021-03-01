#include<iostream>
#include<cstring>

using namespace std;

void strcount(const string str);
int main()
{
    string input;
    char next;
    cout << "Wprowadz wiersz:\n";
    getline(cin, input);
    while (cin)
    {
          strcount(input);
          cout << "Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
          getline(cin, input);
    }
    cout << "Koniec\n";
    cin.ignore();
    return 0;
}

void strcount(const string str)
{
     static int total = 0;
     int count = 0;
     cout << "\"" << str << "\" zawiera ";
     while(str[count] != '\0')
                  count++;
     total += count;
     cout << count << " znakow\n";
     cout << "Lacznie " << total << " znakow\n";
}
