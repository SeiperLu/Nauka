#include<iostream>
int main()
{
    using namespace std;
    cout << "Cudowny kalkulator bedzie sumowal i liczyl srednia liczb jakie podasz." <<endl;
    cout << "Podaj ile liczb bedziesz chcial obliczyc: ";
    int l;
    cin >> l;
    cout << "Podawaj liczby." <<endl;
    double sum = 0.0;
    double li;
    int g = 1;
    for (int i = 1; i <= l; i++)
    {
        cout << "Wartosc " << g << ": "; 
        cin >> li;
        g++;
        sum += li;
    }
    cout << "Doprawdy, wspaniale liczby! Ich suma to " << sum;
    cout << ", a srednia " << sum / l <<"." << endl;
    cout << "Cudowny kalkulator zegna sie z toba!";
    cin.get();
    cin.get();
    return 0;
}
    
    
    
    
