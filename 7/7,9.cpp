#include<iostream>
int c_in_str(const char * str, char ch);

int main()
{
    using namespace std;
    char mmm[15] = "minimum";
    char *wail = "ululate";
    
    int ms = c_in_str(mmm, 'm');
    int us = c_in_str(wail, 'u');
    cout << ms << " znakow m w " << mmm <<endl;
    cout << us << " znakow u w " << wail <<endl;
    cin.get();
    cin.get();
    return 0;
}

int c_in_str(const char * str, char ch)
{
    int count = 0;
    while(*str)
    {
               if (*str == ch)
                  count++;
               str++;
    }
    return count;
}
