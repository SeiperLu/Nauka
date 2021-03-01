#include<iostream>
const int Max = 5;

double * fill_array(double * ar, int limit);
void show_array(const double * ar, const double * n);
void revalue(double r, double * ar, double * n);

int main()
{
    using namespace std;
    double * properties[Max];
    
    double * size = fill_array(* properties, Max);
    show_array(* properties, * size);
    cout << "Podaj czynnik zmiany wartosci: ";
    double factor;
    cin >> factor;
    revalue(factor, * properties, * size);
    show_array(* properties, * size);
    cout << "Gotowe!\n";
    cin.get();
    cin.get();
    return 0;
}

double * fill_array(double * ar, int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Podaj wartosc nr " << (i + 1) <<": ";
        cin >> temp;
        if (!cin)
        {
                 cin.clear();
                 while (cin.get() != '\n')
                       continue;
                 cout << "Bledne dane, wprowadzanie danych przerwane.\n";
                 break;
        }
        else if (temp < 0)
             break;
        *(ar + i) = temp;
    }
    return &(ar + i + 1);
}

void show_array(const double * ar, const double * n)
{
     using namespace std;
     for (int i = 0; *ar + i != *n ; i++)
     {
         cout << "Nieruchomosc nr " << (i + 1) << ": " << *ar + i <<endl;
     }
}

void revalue(double r, double * ar, double * n)
{
     for (int i = 0; *ar + i != *n; i++)
         *(ar + i) *= r;
}
