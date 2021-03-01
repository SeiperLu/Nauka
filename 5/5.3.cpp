#include<iostream>

int main()
{
    using namespace std;
     int x;
     cout << "wyrazenie x = 100 ma wartosc ";
     cout << (x=100) <<endl;
     cout << "teraz x = " << x <<endl;
     cout << "wyrazenie x < 3 ma wartosc " << (x < 3) <<endl;
     cout << "wyrazenie x > 3 ma wartosc " << (x > 3) <<endl;
     cout.setf (ios_base::boolalpha);
     cout << "wyrazenie x < 3 ma wartosc " << (x < 3) <<endl;
     cout << "wyrazenie x > 3 ma wartosc " << (x > 3) <<endl;
     cin.get();
     cin.get();
     return 0;
}
     
     
