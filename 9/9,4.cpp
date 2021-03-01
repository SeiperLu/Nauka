#include<iostream>
void oil(int x);

int main()
{
    using namespace std;
    
    int texas = 31;
    int year = 1999;
    cout << "W funkcji main() texas = " << texas << ", &texas = ";
    cout << &texas <<endl;
    cout << "W funkcji main() year = " << year << ", &year = ";
    cout << &year <<endl;
    oil(texas);
    cout << "W funkcji main() texas = " << texas << ", &texas = ";
    cout << &texas <<endl;
    cout << "W funkcji main() year = " << year << ", &year = ";
    cout << &year <<endl;
    cin.ignore();
    return 0;
}

void oil(int x)
{
     using namespace std;
     int texas = 5;
     cout << "W funkcji oil() texas = " << texas << ", &texas = ";
     cout << &texas <<endl;
     cout << "W funkcji oil() x = " << x << ", &x = ";
     cout << &x <<endl;
     {
          int texas = 113;
          cout << "Wewnatrz bloku texas = " << texas;
          cout << ", &texas = " << &texas <<endl;
          cout << "Wewnatrz bloku x = " << x;
          cout << ", &x = " << &x <<endl;
     }
     cout << "Zablokiem texas = " << texas;
     cout << ", &texas = " << &texas <<endl;
}
          
