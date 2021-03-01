#include<iostream>

double harmoniczna(double x, double y);

int main()
{
    using namespace std;
    double x,y;
    cout << "Prosze podac 2 liczby: ";
    cin >> x;
    cin >> y;
    while ( x != 0 && y != 0)
    {
          cout << "Srednia harmonicznma: " << harmoniczna(x, y) <<endl;
          cout << "Podaj 2 kolejne liczby: ";
          cin >> x;
          cin >> y;
    }
    cin.get();
    cin.get();
    return 0;
}

double harmoniczna(double x, double y)
{
       return 2.0 * x * y / ( x + y);
}
          
