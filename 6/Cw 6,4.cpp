#include<iostream>
using namespace std;
const int strsize = 30;
void menu();
struct zpdw
{
       char imie[strsize];
       char stanowisko[strsize];
       char pseudozpdw[strsize];
       int preferencje;
};

int main()
{
    zpdw lista[5] =
    {
         {"Wimp Macho", "Wimp Macho", "Rzygor", 1},
         {"Raki Rhodes", "Mlodszy programista", "Nigga" , 2},
         {"Celia Laiter", "MIPS", "Pieknis", 2},
         {"Hoppy Hipman", "Szkoleniowiec Analitykow", "Gruby", 3},
         {"Pat Hand", "LOOPY", "Yeti", 3}
    };
    
    cout << "Zakon Programistow Dobrej Woli\n";
    char choice;
    menu();
    cin >> choice;
    while(choice != 'q')
    {
         if(choice == 'd')
         {
         int x = 0; 
         while(x <5)
         {
                   switch(lista[x].preferencje)
                   {
                        case 1 : cout << lista[x].imie <<endl;
                                 break;
                        case 2 : cout << lista[x].stanowisko <<endl;
                                 break;
                        case 3 : cout << lista[x].pseudozpdw <<endl;
                   }
                   ++x;
         }
         cout <<endl;
         }
         else
        {
          int y = 0;
          switch(choice)
          {
                        case 'a' : while(y < 5)
                                   {
                                   cout << lista[y].imie <<endl;
                                   ++y;
                                   }
                                   cout <<endl;
                                   break;
                        case 'b' : while(y < 5)
                                   {
                                   cout << lista[y].stanowisko <<endl;
                                   ++y;
                                   }
                                   cout <<endl;
                                   break;
                        case 'c' : while(y < 5)
                                   {
                                   cout << lista[y].pseudozpdw <<endl;
                                   ++y;
                                   }
                                   cout <<endl;
                                   break;
                        default : cout << "Nie ma takiej opcji!\n";
          }
        }   
         menu();
         cin >> choice;
    }
   return 0;
}

void menu()
{
     cout << "Wybierz jedna z opcji:\n"
          << "a) lista wg imion        b) lista wg stanowisk\n"
          << "c) lista wg pseduonimow  d) lista wg preferencji\n"
          << "q) koniec\n";
}


                         
    
