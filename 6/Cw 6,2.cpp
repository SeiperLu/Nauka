#include<iostream>
const int Max = 10;
int main()
{
    using namespace std;
    double datki[Max];
    cout << "Prosze podac wartosci datkow (max 10), wprowadzanie wartosci konczy podanie wartosci nie liczbowej:\n";
    int x = 0;
    int count = 0;
    double sum = 0.0;
    while(cin >> datki[x] && x < Max)
    {
              sum = sum + datki[x];
              ++x;
    }
    cout << "Srednia datkow to " << sum / x <<endl;
    cout << "Datki wieksze od sredniej: ";
    while(count < x)
    {
                if(datki[count] > sum / x)
                {
                                cout << datki[count] << " ";
                                ++count;
                }
                else
                ++count;
    }
    cin.get();
    cin.get();
    return 0;
} 
