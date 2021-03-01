#include<iostream>
#include<fstream>

int main()
{
    using namespace std;
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    
    ofstream outFile;
    outFile.open("carinfo.txt");
    
    cout << "Podaj marke i model auta: ";
    cin.getline(automobile, 50);
    cout  << "Podaj rok produkcji: ";
    cin >> year;
    cout << "Podaj cene wyjsciowa: ";
    cin >> a_price;
    d_price = 0.913 * a_price;
    
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Mark i model: " << automobile << endl;
    cout << "Rok: " << year << endl;
    cout << "Cena wywolawcza w zl: " << a_price << endl;
    cout << "Cena biezaca: " << d_price << endl;
    
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Mark i model: " << automobile << endl;
    outFile << "Rok: " << year << endl;
    outFile << "Cena wywolawcza w zl: " << a_price << endl;
    outFile << "Cena biezaca: " << d_price << endl;
    
    outFile.close();
    cin.get();
    cin.get();
    return 0;
}
