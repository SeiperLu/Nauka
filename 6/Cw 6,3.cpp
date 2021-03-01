#include<iostream>
void menu();
using namespace std;

int main()
{
    char choice;
    menu();
    cin >> choice;
    while(choice != 'q')
    {
                 switch(choice)
                 {
                               case 'r' : cout << "Roslinozerca to zjadacz traw.\n";
                                          break;
                               case 'p' : cout << "Fryderyk Chopin t wybitny pianista.\n";
                                          break;
                               case 'd' : cout << "Klon jest drzewem.\n";
                                          break;
                               case 'g' : cout << "Gra bedzie gotowa za rok.\n";
                                          break;
                               default : cout << "Nie ma takiej opcji!\n";
                 }
                 menu();
                 cin >> choice;
    }
    return 0;
}

void menu()
{
     cout << "Wybierz jedna z opcji:\n"
          << "r) roslinozerca          p) pianista\n"
          << "d) drzewo                g) gra\n"
          << "q) koniec\n";
}
                 
                                       
    
