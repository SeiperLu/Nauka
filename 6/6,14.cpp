#include<iostream>
const int Max = 5;
int main()
{
    using namespace std;
    int golf[Max];
    cout << "Prosze podac swoje wyniki w golfie.\n";
    cout << "Musisz podac " << Max << " gier.\n";
    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "Tura " << i + 1 << ".: ";
        while (!(cin >> golf[i]))
        {
              cin.clear();
              while (cin.get() != '\n')
                    continue;
              cout << "Prosze podac liczbe: ";
        }
    }
    
    double total = 0.0;
    for (i = 0; i < Max; i++)
        total += golf[i];
    cout << total / Max << " = sredni wynik z " << Max << " tur.\n";
    cin.get();
    cin.get();
    return 0;
}
