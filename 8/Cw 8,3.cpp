#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
void uper(string & a);

int main()
{
    using namespace std;
    string wiersz;
    cout << "Podaj lancuch (q, aby skonczyc) : ";
    getline(cin, wiersz);
    while (wiersz != "q")
    {
          uper(wiersz);
          cout << wiersz << endl;
          cout << "Nastepny lancuch (q, aby skonczyc): ";
          getline(cin, wiersz);
    }
    uper(wiersz);
    cout << "Do widzenia!";
    cin.get();
    cin.get();
    return 0;
}
    
void uper(string & a)
{
     int n = a.size();
     char ch[n];
     for(int i = 0; i < n; i++)
             ch[i] = a[i];
     for(int i = 0; i < n; i++)
             ch[i] = toupper(ch[i]);
     for(int i = 0; i < n; i++)
             a[i] = ch[i];
}
         
          
