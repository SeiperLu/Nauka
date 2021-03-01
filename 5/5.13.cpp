#include<iostream>
const int AS = 20;

int main()
{
    using namespace std;
    char name[AS];
    cout << "prosze podac imie: ";
    cin >> name;
    cout << "oto twoje imie ustawione pionowo jako kod ASCII:" <<endl;
    int i = 0;
    while (name[i] != '\0')
    {
          cout << name[i] << ": " << int(name[i]) <<endl;
          i++;
    }
    cin.get();
    cin.get();
    return 0;
}
