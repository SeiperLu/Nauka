#include<iostream>
#include<cmath>

double add(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));
double Odej(double x, double y)
{
       return x - y;
}
     
double Mno(double x, double y)
{
       return x * y;
}

double Dzie(double x, double y)
{
       return x / y;
}

double Pot(double x, double y)
{
       return (x + y) * (x + y);
}

double Pier(double x, double y)
{
       return sqrt(x + y);
}     

int main()
{
    using namespace std;
    double (*pf[5])(double, double) = {&Odej, &Mno, &Dzie, &Pot, &Pier};
    double x, y;
    cout << "Podaj 2 liczby: ";
    while(cin >> x >> y)
    {
            cout << "Dodawanie: " << calculate(x, y, add) <<endl;
            cout << "Odejmowanie: " << calculate(x, y, pf[0]) <<endl; 
            cout << "Mnozenie: " << calculate(x, y, pf[1]) <<endl; 
            cout << "Dzielenie: " << calculate(x, y, pf[2]) <<endl; 
            cout << "Potega sumy: " << calculate(x, y, pf[3]) <<endl; 
            cout << "Pierwiastek sumy: " << calculate(x, y, pf[4]) <<endl;
    }
    cin.get();
    cin.get();
    return 0;
}

double add(double x, double y)
{
       return x + y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
       return pf(x, y);
}


             
