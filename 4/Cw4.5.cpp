#include<iostream>
#include<cstring>
using namespace std;
struct Batonik
{
       string nazwa;
       double waga;
       int kalorie;
};

int main()
{
    
    Batonik snack = {"Mocha Munch" ,2.3 , 350};
    cout << snack.nazwa << " " << snack.waga << " " << snack.kalorie;
    cin.get();
    cin.get();
    return 0;
    
}
