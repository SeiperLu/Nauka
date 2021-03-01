#include<iostream>
#include<cstring>

using namespace std;
char * getname(void);

int main()
{
    char * name;
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

char * getname()
{
     string temp;
     cout << "Podaj nazwisko; ";
     getline(cin,temp);
     char(temp);
     char * pn = new char[strlen((char)temp) + 1];
     strcpy(pn,(char)temp);
     return pn;
}
