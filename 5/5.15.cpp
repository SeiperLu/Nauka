#include <iostream>

int main()
{
    using namespace std;
    int n;
    cout <<"aby poznac moja ulubiona liczbe, podawaj liczby od 1 do 10" <<endl;
    do
    {
         cin >> n;
    }
    while ( n != 7 );
    cout << "tak. moja ulubiona liczba to 7";
    cin.get();
    cin.get();
    return 0;
}
