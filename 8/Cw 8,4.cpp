#include<iostream>
#include<cstring>
using namespace std;
struct stringy
{
       char * str;
       int ct;
};
void show(stringy a, int n = 1);
void show(char ch[], int z = 1); 
void set(stringy & a, char ch[]);

int main()
{
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to co kiedys.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Gotowe!");
    cin.get();
    cin.get();
    return 0;
}

void set(stringy & a, char ch[])
{
     int x = strlen(ch);
     char  * ps = new char[x];
     for(int i = 0; i < x; i++)
             ps[i] = ch[i];
     a.str = ps;
     a.ct = x;
}

void show(stringy a, int n)
{
     for(int i = 0; i < n; i++)
             for(int y = 0; y < a.ct; y++) 
                     {
                       cout << a.str[y];
                       if( y + 1 == a.ct)
                       cout << endl;
                     }
}

void show(char ch[], int z)
{
     for(int i = 0; i < z; i++)
             for(int y = 0; ch[y] != '\0'; y++) 
                     {
                       cout << ch[y];
                       if( ch[y + 1] == '\0')
                       cout << endl;
                     }
}
     
     
