 #include<iostream>
 
 int main()
 {
     using namespace std;
     int qs[10] ={20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
     cout << "bezblednie" <<endl;
     int i;
     for (i = 0; qs[i] == 20; i++)
         cout << "test " << i << " ma wartosc 20" <<endl;
     cout << "robi sie niebezpiecznie:" <<endl;
     for (i =0; qs[i] = 20; i++)
         cout << "test " << i << " ma wartosc 20" <<endl;
     cin.get();
     cin.get();
     return 0;
 }
