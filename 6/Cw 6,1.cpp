char ch;
#include<iostream>
#include<cctype>
#include<cstring>

int main ()
{
    using namespace std;
    char tekst[80];
    int ch = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    cout << "Podawaj tekst ( znak @ konczy wprowadzanie): ";
    cin.getline(tekst,80);
    while(tekst[x] != '@')
{
         if(isspace(tekst[x]) && tekst[z - 1] != ' ')
         {
         tekst[z] = ' ';
         ++x;
         ++z;
         }
         else if(isdigit(tekst[x]))
         ++x;
         else if(islower(tekst[x]))
         {
         tekst[z] = toupper(tekst[x]);
         ++x;
         ++z;
         }
         else if(isupper(tekst[x]))
         {
         tekst[z] = tolower(tekst[x]);
         ++x;
         ++z;
         }
         else
         ++x;
}
    if(z == 0)
    cout << "Brak tekstu!!";
    else
        while(y < z)
        {
             cout << tekst[y];
             ++y;
        }             
    cin.get();
    cin.get();
    return 0;
} 
