#include<iostream>
int main()
{
    using namespace std;
    int w,a;
    int q = 0;
    cout << "Podaj liczbe wierszy: ";
    cin >> w;
    a = w;
   for (int t= 0;w != 0;++t)
    {
        for(int d = a;d - t - 1 != 0 ; --d)
                {
                 cout << ".";
                 ++q;
                 }
        for (int z = 0; z + q != a; ++z)
            cout << "*";
        cout << endl;
        q = 0;    
        --w;    
    }   
    cin.get();
    cin.get();
    return 0;
}
    
            
