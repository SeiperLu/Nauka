#include<iostream>

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main()
{
    using namespace std;
    cout << "Funkcja main() zwraca bastepujace adresy:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    cin.ignore();
    return 0;
}
