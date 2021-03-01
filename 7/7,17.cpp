#include<iostream>

double betsy(int);
double pam(int);

void estimate(int lines, double (*pf)(int));

int main()
{
    using namespace std;
    int code;
    
    cout << "Ile wierszy kodu nalezy napisac? ";
    cin >> code;
    cout << "Oszacowanie Betsy:\n";
    estimate(code, betsy);
    cout << "Oszacowanie Pam:\n";
    estimate(code, pam);
    cin.get();
    cin.get();
    return 0;
}

double betsy(int lns)
{
       return 0.05 * lns;
}

double pam(int lns)
{
       return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
     using namespace std;
     cout << lines << " wierszy wymaga " << (*pf)(lines) << " godzin pracy.\n";
}
