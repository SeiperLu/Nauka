#include<iostream>
int main()
{
    using namespace std;
    char ch;
    
    cout << "Pisz a ja bede powtarzac.\n";
    cin.get(ch);
    while (ch != '.')
    {
          if (ch == '\n')
             cout << ch;
          else
              cout << ++ch;
          cin.get(ch);
    }
    cout << "\nProsze wybaczyc drobne niedorobki.";
    cin.get();
    cin.get();
    return 0;
} 
          
