#include<iostream>
int main()
{
    using namespace std;
    cout << "Program ten mze sformatowac twoj dysk\n"
            "i zniszczyc wszystkie znajdujace sie na nim dane.\n"
            "Czy mam kontynuowac? <t/n> ";
    char ch;
    cin >> ch;
    if ( ch == 't' || ch == 'T')
       cout << "Ostrzegalem!\a\a\n";
    else if ( ch == 'n' || ch == 'N')
         cout << "Bardzo rozsadnie... Do widzenia\n";
    else
        cout << "Nie wynbrano t ani n, ale sprobuje zniszczyc twoj dysk jeszcze raz.\a\a\a\n";
    cin.get();
    cin.get();
    return 0; 
}        
