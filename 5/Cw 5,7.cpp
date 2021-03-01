#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    char slowa[20];
    char warunek[20] = "gotowe";
    int counts = 0;
    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")" <<endl;
    for (int x = 0; strcmp(warunek,slowa); ++x)
    {
        strcmp(warunek, "gotowe");
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

        
