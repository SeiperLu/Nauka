#include <iostream>
#include <ctime>

int main()
{
    using namespace std;
    cout << "podaj czas opuznienia w sekundach: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "zaczynamy\a\n";
    clock_t start = clock();
    while ( clock() - start < delay);
    cout <<"gotowe\a\n";
    cin.get();
    cin.get();
    return 0;
}
