#include<iostream>
#include<ctime>
int main ()
{
    using namespace std;
    char ch;
    float sec;
    cout << "podaj opuznienie" <<endl;
    cin >> sec;
    clock_t delay = sec * CLOCKS_PER_SEC;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false)
    {
          cout << ch;
          ++count;
          cin.get(ch);
    }
    cout << endl << "wczytano " << count << " znakow" <<endl;
    cout << "\a";
    clock_t start = clock();
    while (clock() - start < delay)
    {}
    cout <<"\a";
    return 0;
}
    
          
