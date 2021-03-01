#include<iostream>
#include<fstream>

int main()
{
    using namespace std;
    
    ofstream outFile;
    outFile.open("Æw 6,8.txt");
    
    int counts= 0;
    cout << "Prosze podac tekst:\n";
    char ch;
    cin.get(ch);
    while(ch != '\n')
    {
             if(isgraph(ch))
             ++counts;
             outFile << ch;
             cin.get(ch);
    }
    outFile << endl << "Liczba znakow w pliku: " << counts;
    return 0;
} 
