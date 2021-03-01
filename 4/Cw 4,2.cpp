#include<iostream>
#include<cstring>

using namespace std;
string * getname(void);

int main()
{
    string name;
    name = getname();
    cout << name << " pod adresem " << (int *) name <<endl;
    delete [] name;
    
    name = getname();
    cout << name << " pod adresem " << (int *) name <<endl;
    delete [] name;
    cin.get();
    cin.get();
    return 0;
    
}

string * getname()
{
     string temp;
     cout << "Podaj nazwisko; ";
     getline(cin,temp);
     string * pn;
     *pn = temp;
     return pn;
}
    
