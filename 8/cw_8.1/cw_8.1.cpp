

#include <iostream>

void lancuch(char* n, int par = 0);
using namespace std;
int wywolan = 0;
int dlugosc = 20;
int main()
{
    char *ch = new char[dlugosc];
    cout << "Podaj lancuch: ";
    cin.get(ch,dlugosc);
    cout << "Bez parametru: \n";
    lancuch(ch);
    lancuch(ch);
    cout << "z Parametrem: \n";
    lancuch(ch, 1);
    return 0;
}

void lancuch(char* n, int par)
{
    
    if (par == 0)
    {
        int k = 0;
        while (*(n+k) != '\0')
        {
            cout << *(n+k);
            k++;
        }
        cout << endl;
        wywolan++;
    }
    else
    {
        int i;
        int k;
        for (i = 0; i < wywolan; i++)
        {
            k = 0;
            while (*(n+k)  != '\0')
            {
                cout << *(n + k);
                k++;
            }
            cout << endl;
        }
            
        wywolan++;
    }
}   


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
