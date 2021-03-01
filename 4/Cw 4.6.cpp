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
    
    Batonik snack[3] = 
    {
    {"Kit Kat",2.5,200},
    {"Snikers",5.6,500},
    {"Mocha Munch",2.3,350}
    };
    cout <<snack[1].nazwa<< " "<<snack[1].waga<< " "<<snack[1].kalorie<<endl;
    cout <<snack[2].nazwa<< " "<<snack[2].waga<< " "<<snack[2].kalorie<<endl;
    cout <<snack[3].nazwa<< " "<<snack[3].waga<< " "<<snack[3].kalorie<<endl;
    cin.get();
    cin.get();
    return 0;
    
}
