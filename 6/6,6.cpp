#include<iostream>
const char * qualify[4] = 
{
      "bieg na 10km.",
      "przeciaganie liny w blocie.",
      "pojedynek mistrzow canoe.",
      "festiwal rzycania plackow."
};

int main()
{
    using namespace std;
    int age;
    cout << "Podaj swoj wiek: ";
    cin >> age;
    int index;
    
    if ( age > 17 && age < 35)
       index = 0;
    else if ( age >= 35 && age < 50)
         index = 1;
    else if ( age >= 50 && age < 65)
         index = 2;
    else
        index = 3;
        
    cout << "Kwalifikujesz sie do konkurencji " << qualify[index];
    cin.get();
    cin.get();
    return 0;
}
        
        
