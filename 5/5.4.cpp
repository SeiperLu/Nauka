#include<iostream>
using namespace std;
const int arsize = 16;

int main()
{
    double factorials [arsize];
    factorials[1] = factorials[0] = 1.0;
    int i;
    for ( int i = 2; i <arsize; i++)
        factorials [i] = i * factorials [i -1];
    for ( i = 0; i < arsize; i++)
        cout << i << "! = " << factorials[i] <<endl;
    cin.get();
    cin.get();
    return 0;
}
         
