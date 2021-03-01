#include<iostream>
#include<cstring>
template<typename t>
t* maxn(t n[], int i);
template <> char* maxn(char ch[], int i);

int main()
{
    using namespace std;
    int k[5] = {156,22,16,18948,1515};
    double h[4] = {159.151,1.1,548.365,69.666};
    const char* z[3] = {"WoW jest the best!", "Jedziemy jutro na Fieste!!", "Napierdalamy jutro w ASG!!"};
    int *i = maxn(k, 5);
    double *l = maxn(h, 4);
    char* ps = maxn(z, 3);
    cout << *i << " " << *l << " " << *ps;
    cin.get();
    cin.get();
    return 0;
}

template<typename t>
t maxn(t n[], int i)
{
        t k;
         for(int z = 0; z < i; z++)
         {
                 for(int y = 0; y < i; y++)
                 {
                 if(n[y] > n[y+1])
                         continue;
                 else
                 {
                    k = n[y];
                    n[y] = n[y+1];
                    n[y+1] = k;
                 }
                 }
         }
         return n[0];
} 

template <> char* maxn(char ch[], int i)
{
         char k;
         for(int z = 0; z < i; z++)
         {
                 for(int y = 0; y < i; y++)
                 {
                 if(strlen(&ch[y]) > strlen(&ch[y+1]))
                         continue;
                 else
                 {
                    k = ch[y];
                    ch[y] = ch[y+1];
                    ch[y+1] = k;
                 }
                 }
         }
         return &ch[0];
}
