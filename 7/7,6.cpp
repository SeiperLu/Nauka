#include<iostream>
const int AS = 8;
int sum_arr(int arr[], int n);
using namespace std;
int main()
{
    int cookies[AS] = {1,2,4,8,16,32,64,128};
    cout << cookies << " = adres tablicy, ";
    cout << sizeof cookies << " = sizeof cookies\n";
    int sum = sum_arr(cookies, AS);
    cout << "Zjednone ciasteczka: " << sum <<endl;
    sum = sum_arr(cookies, 3);
    cout << "Pierwsze 3 osoby zjadly " << sum << " ciasteczek.\n";
    sum = sum_arr(cookies + 4, 4);
    cout << "Ostatnich czworo zjad³o " << sum << " ciastek.\n";
    cin.get();
    cin.get();
    return 0;
} 

int sum_arr(int arr[], int n)
{
    int total = 0;
    cout << arr << " = arr, ";
    cout << sizeof arr << " = sizeof arr\n";
    for (int i = 0; i < n; ++i)
        total = total + arr[i];
    return total;
}
    
