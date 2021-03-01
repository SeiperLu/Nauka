#include<iostream>

int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;
    
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents <<endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents <<endl;
    cout << "adres rats = " << &rats;
    cout << ", adres rodents = " << &rodents <<endl;
    cin.get();
    cin.get();
    return 0;
}
