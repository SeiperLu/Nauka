#include<iostream>
template<typename T>
T max5(T n[]);

int main()
{
    using namespace std;
    int k[5] = {1, 55, 126, 649, 5};
    double l[5] = {185.125, 23.4569, 5.697, 1915.66, 69.666};
    int i = max5(k);
    double d = max5(l);
    cout << i << " " << d << endl;
    cin.get();
    cin.get();
    return 0;
}

template<typename T>
T max5(T n[])
{
         if(n[0] >= n[1])
         {
                 if(n[0] >= n[2])
                         if(n[0] >= n[3])
                                 if(n[0] >= n[4])
                                 return n[0];
                                 else
                                 return n[4];
                         else
                         if(n[3] >= n[4])
                                 return n[3];
                                 else
                                 return n[4];
                 else
                 if(n[2] >= n[3])
                         if(n[2] >=n[4])
                         return n[2];
                         else
                         return n[4];
                 else
                     if(n[3] >= n[4])
                     return n[3];
                     else
                     return n[4];
                 
         }
         else
         {
             if(n[1] >= n[2])
                         if(n[1] >= n[3])
                                 if(n[1] >= n[4])
                                 return n[1];
                                 else
                                 return n[4];
                         else
                         if(n[3] >= n[4])
                                 return n[3];
                                 else
                                 return n[4];
                 else
                 if(n[2] >= n[3])
                         if(n[2] >=n[4])
                         return n[2];
                         else
                         return n[4];
                 else
                     if(n[3] >= n[4])
                     return n[3];
                     else
                     return n[4];
         }
}
                 
         
            
