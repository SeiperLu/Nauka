#include<iostream>
int main()
{
    using namespace std;
    double sumaD = 100;
    double sumaC = 100;
    int counts = 0;
    double zestawienie[2][30];
    for(int x = 0; sumaC <= sumaD; ++x)
    {
        sumaD = sumaD + 10;
        zestawienie[0][counts] = sumaD;
        sumaC = sumaC * 1.05;
        zestawienie[1][counts] = sumaC;
        ++counts;
        
    }
    cout << "Inwestycje Cleo przekrocza inwestycje Daphne po " << counts << " latach\n";
    cout << "Daphne\\Cleo:" <<endl;
    for(int a = 0; a <= counts; ++a)
           cout << zestawienie[0][a] <<"\\" << zestawienie[1][a] <<"\t";
   cout <<endl;
cin.get();
cin.get();
return 0;
}
    
    
