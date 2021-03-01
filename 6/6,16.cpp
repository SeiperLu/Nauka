#include<iostream>
#include<fstream>
#include<cstdlib>
const int SIZE = 60;

int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    
    cout << "Podaj nazwe pliku z danymi: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if(!inFile.is_open())
    {
          cout << "Otwarcie pliku " << filename << " nie powiodlo sie.\n";
          cout << "Program zostanie zakonczony.\n";
          exit(EXIT_FAILURE);
    }
    
    double value;
    double sum = 0.0;
    int count = 0;
    
    inFile >> value;
    while (inFile.good())
    {
          ++count;
          sum += value;
          inFile >> value;
    }
    if(inFile.eof())
          cout << "Koniec pliku.\n";
    else if (inFile.fail())
          cout << "Wczytywanie danych przerwane - blad.\n";
    else 
          cout << "Wczytywanie danych przerwane. przyczyna nieznana.\n";
    if(count == 0)
          cout << "Nie przetworzono zadnych danych.\n";
    else 
    {
         cout << "Wczytanych elementow: " << count << endl;
         cout << "Suma: " << sum << endl;
         cout << "Srednia: " << sum / count << endl;
    }
    inFile.close();
    cin.get();
    cin.get();
    return 0;
}
         
           
