#include<iostream>
const int ar = 8;
int sum_arr(const int * begin, const int * end);

int main()
{
    using namespace std;
    int cookies[ar] = {1,2,4,8,16,32,64,128};
    int sum = sum_arr(cookies, cookies + ar);
    cout << "zjedzono ciasteczek: " << sum <<endl;
    sum = sum_arr(cookies, cookies + 3);
    cout << "Pierwsze 3 osoby zjadly " << sum << " ciasteczekk.\n";
    sum = sum_arr(cookies + 4, cookies + 8);
    cout << "Ostatnich 4 zjadlo " << sum << " ciasteczek.\n";
    cin.get();
    cin.get();
    return 0;
}

int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;
    for (pt = begin; pt != end; pt++)
        total = total + *pt;
    return total;
}
