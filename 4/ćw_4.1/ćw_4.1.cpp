// ćw_4.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

struct dane
{
    string imie;
    string naziwsko;
    int wiek;
    int ocena;
};
int main()
{
    dane uczen_1;
    cout << "Jak masz na imie? ";
    getline(cin,uczen_1.imie);
    cout << "Jak sie nazywasz? ";
    getline(cin,uczen_1.naziwsko);
    cout << "Na jaka ocene zasugujesz? ";
    cin >> uczen_1.ocena;
    cout << "Ile masz lat? ";
    cin >> uczen_1.wiek;
    cout << "Naziwsko: " << uczen_1.naziwsko << ", " << uczen_1.imie << endl;
    cout << "Ocena: " << uczen_1.ocena - 1 << endl;
    cout << "Wiek: " << uczen_1.wiek;

    return 0;
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
