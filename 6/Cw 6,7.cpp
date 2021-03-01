#include<iostream>
#include<cctype>

int main()
{
    using namespace std;
    char ch[20];
    cout << "Podawaj s³owa (pojedyncze q konczy):\n";
    cin >> ch;
    int sam = 0;
    int spo = 0;
    int x = 0;
    while (strcmp(ch, "q"))
    {
          
          if(isalpha(ch[0]))
          {
           switch(ch[0])
           {
                       case 'a' :
                       case 'A' : ++sam;
                                  break;
                       
                       case 'e' : 
                       case 'E' : ++sam;
                                  break;
                       
                       case 'o' :
                       case 'O' : ++sam;
                                  break;
                       
                       case 'i' :
                       case 'I' : ++sam;
                                  break;
                       
                       case 'u' :
                       case 'U' : ++sam;
                                  break;
                       
                       default : ++spo;
           }
          }
          else
          ++x;
          cin >> ch;
    } 
    cout << spo << " slow zaczyna sie od spolglosek.\n";
    cout << sam << " slow zaczba sie od samoglosek.\n";
    cout << x << " slow nie zalicza sie do zadnej z tych kategorii.\n";
    cin.get();
    cin.get();
    return 0;
}
                
