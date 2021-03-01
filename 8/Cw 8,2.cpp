#include<iostream>
struct Batonik
{
       char marka[20];
       double we;
       int k;
};

void wyp(Batonik &a, char *ch = "Millennium Munch", double wa = 2.85, int i = 350);
void Show(Batonik &a);

int main()
{
    using namespace std;
    Batonik mars;
    wyp(mars);
    Show(mars);
    cin.get();
    cin.get();
    return 0;
}

void wyp(Batonik &a, char *ch, double wa, int i)
{
     strcpy(a.marka, ch);
     a.we = wa;
     a.k = i;
}

void Show(Batonik &a)
{
     using namespace std;
     cout << a.marka << " " << a.we << " " << a.k << endl;
}
