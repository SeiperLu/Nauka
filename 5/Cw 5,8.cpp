#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    string slowa;
    string warunek = "gotowe";
    int counts = 0;
    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")" <<endl;
    for (int x = 0; slowa != warunek; ++x)
    {
        warunek = "gotowe";
        cin >> slowa;
        cin.get();
        ++counts;
    }
    cout << "Podano " << counts - 1 << " slow.";
    cin.get();
    cin.get();
    cin.get();
    return 0;
}
