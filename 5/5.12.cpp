#include<iostream>
#include<cstring>

int main()
{
    using namespace std;
     string word = "?ate";
     
     for (char ch = 'a'; word != "mate"; ch++)
     {
         cout << word <<endl;
         word [0] =ch;
     }
     cout << "petla sie skonczyla slowo to " << word <<endl;
     cin.get();
     cin.get();
     return 0;
}
