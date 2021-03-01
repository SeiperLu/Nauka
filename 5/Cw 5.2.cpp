#include<iostream>
int main()
{
    using namespace std;
    int one, suma;
    cout << "Prosze podawac liczby calkowite.\n";
    cin >> one;
    suma =one; 
    for (int a = one; a != 0;)
    {
        cout << suma <<endl;
        cin >> one;
        a = one;
        suma = suma + one;
    }
    cin.get();
    cin.get();
    return 0;
}
