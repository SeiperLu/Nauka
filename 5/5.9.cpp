#include<iostream>
#include<cstring>

int main()
{
    using namespace std;
    cout << "Podaj slowo: ";
    string word;
    cin >> word;
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << endl << "Gotowe" <<endl;
    cin.get();
    cin.get();
    return 0;
}
