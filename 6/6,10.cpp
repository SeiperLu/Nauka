#include<iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
          switch(choice)
          {
                        case 1 : cout << "\a\n\n";
                                 break;
                        case 2 : report();
                                 break;
                        case 3 : cout << "Szef nigdzie nie wyhcodzil.\n\n";
                                 break;
                        case 4 : comfort();
                                 break;
                        default : cout << "Nie ma takiej opcj.\n\n";
          }
          showmenu();
          cin >> choice;
    }
    cout << "Do zobaczenia!\n";
    cin.get();
    cin.get();
    return 0;
}

void showmenu()
{
     cout << "Wybierz 1, 2, 3, 4 albo 5:\n"
             "1) alarm           2) raport\n"
             "3) alibi           4) luzik\n"
             "5) koniec\n";
}

void report()
{
     cout << "To bylo naprawde wspanialy tydzien.\n"
             "Sprzedaz wzrosla o 120%, wydatki zmalay o 35%.\n\n";
}

void comfort()
{
     cout << "Pracownicy uwazaja sie za fgbfgbihihlbfbiuhfdgfjgfymghfmhkhj.\n\n";
}
