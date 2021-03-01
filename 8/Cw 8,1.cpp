#include<iostream>
void Show(char *pt, int n = 0);
int x = 0;
const int ch = 30;

int main()
{
    using namespace std;
    char tekst[ch];
    cout << "Podaj tekst: ";
    cin.get(tekst, ch);
    Show(tekst);
    Show(tekst);
    Show(tekst);
    Show(tekst, 1);
    cin.get();
    cin.get();
    return 0;
}

void Show(char *pt, int n)
{
     using namespace std;
     if(n == 0)
          cout << pt << endl;
     else
         for(int i = 0; i < x; i++)
                 cout << pt << endl;
     x++;
}
    
