#include<iostream>
const int Cities = 5;
const int Years = 4;

int main()
{
    using namespace std;
    const char * cities[Cities] = 
    {
          "Jelenia Gora",
          "Zielona Gora",
          "Stara Gora",
          "Gorki",
          "Wilga Gora"
    };
    
    int maxtemps[Years][Cities] = 
    {
        {95,99,86,100,104},
        {95,97,90,106,102},
        {96,100,940,107,105},
        {97,102,89,108,104}
    };
    
    cout << "Temperatury maksymalne (F) w latach 2002-2005\n\n";
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << " \t";
        cout << endl;
    }
cin.get();
cin.get();
return 0;
}
        
