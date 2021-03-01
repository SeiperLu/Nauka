#include<iostream>
#include<cstring>

int main()
{
    using namespace std;
    char animal [20] = "niedzwiedz";
    const char * bird = "myszolow";
    char * ps;
    
    cout << animal << " oraz " << bird <<endl;
    cout << ps <<endl;
    
    cout << "Podaj rodzaj zwierzecia: ";
    cin >> animal;
    ps = animal;
    cout << ps << "i!\n";
    cout << "Przed uzyciem strcpy():" <<endl;
    cout << animal << " pod adresem " << (int *) animal <<endl;
    cout << ps << " pod adresem " << (int *) ps <<endl;
    
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "Po uzyciu strcpy():\n";
    cout << animal << " pod adresem " << (int *) animal <<endl;
    cout << ps << " pod adresem " << (int *) ps <<endl;
    delete [] ps;
    cin.get();
    cin.get();
    return 0;
}
