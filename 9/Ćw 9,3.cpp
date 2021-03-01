#include<iostream>
#include<new>
struct chaff
{
       char dross[20];
       int slag;
};
void getchaff (chaff pd);
void showchaff (chaff pd);

int main()
{
    using namespace std;
    const int n = 2;
    const int buf = 20000;
    char buffer[buf];
    chaff *pd1, *pd2;
    pd1 = new chaff [n];
    pd2 = new (buffer) chaff [n];
    for (int i = 0; i < n; i++)
    {
        getchaff(pd1[i]);
        getchaff(pd2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        showchaff(pd1[i]);
        showchaff(pd2[i]);
    }
    cin.get();
    cin.get();
    return 0;
}

void getchaff (chaff pd)
{
     using namespace std;
     char name[20];
     cout << "Imie: ";
     cin.get(name, 20);
     strcpy(name, pd.dross);
     cout << "Wiek: ";
     cin >> pd.slag;
}

void showchaff (chaff pd)
{
     using namespace std;
     cout << "Wiek i imie: " << pd.slag << ", " << pd.dross <<endl;
     
}
    
    
