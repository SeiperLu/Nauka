#include<iostream>
template<typename Any>
void Swap(Any &a, Any &b);

int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Uzycie funkcji obslugujacej typ int, wygenerowanej przez "
            "kompilator:\n";
    Swap(i, j);
    cout << "Teraz i, j = " << i << ", " << j << ".\n";
    
    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << ", " << y << ".\n";
    cout << "Uzycie funkcji obslugujacej typ double, wygenerowanej przez "
            "kompilator:\n";
    Swap(x, y);
    cout << "Teraz x, y = " << x << ", " << y << ".\n";
    cin.get();
    cin.get();
    return 0;
}
template<typename Any>
void Swap(Any &a, Any &b)
{
     Any temp;
     temp = a;
     a = b;
     b = temp;
}
