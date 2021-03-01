#include<iostream>
#include<cstring>

using namespace std;

struct pizza
{
       double sred;
       string nazwa;
       int waga;
};

int main()
{
    pizza * p = new pizza;
    cout << "Podaj srednice pizzy: ";
    cin >> p->sred;
    cin.get();
    cout << "Podaj nazwe producenta: ";
    getline(cin,p->nazwa);
    cout << "Podaj wage pizzy: ";
    cin >> p->waga;
    cout << p->nazwa << " " << p->sred << "  " << p->waga;
    cin.get();
    cin.get();
    return 0;
}
    
