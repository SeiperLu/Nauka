#include<iostream>

void simple();

int main()
{
    using namespace std;
    cout << "main() wywo�a funkcj� simple():\n";
    simple();
    cin.get();
    cin.get();
    return 0;
}

void simple()
{
     using namespace std;
     cout << "Jestem sobie taka prosciutka funkcja.\n";
}
