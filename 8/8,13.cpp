#include<iostream>
template<typename Any>
void Swap(Any &a, Any &b);

struct job
{
       char name[40];
       double salary;
       int floor;
};

template <> void Swap<job>(job &j1, job &j2);
void show(job &j);

int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Uzycie funkcji obslugujacej typ int, " 
            "wygenerowanej przez kompilator:\n";
    Swap(i, j);
    cout << "Teraz i, j = " << i << ", " << j << ".\n";
    job sue = {"Susan Yaffe", 73000.60, 7};
    job sidney = {"Sidney Taffee", 78060.72, 9};
    cout << "Przed zamiana struktur job:\n";
    show(sue);
    show(sidney);
    Swap(sue, sidney);
    cout << "Po zamianie struktur job:\n";
    show(sue);
    show(sidney);
    cin.get();
    cin.get();
    return 0;
}

template<typename Any>
void Swap(Any &a, Any &b)
{
     Any temp;
     temp = a;
     a = b;
     b = temp;
}

template <> void Swap<job>(job &j1, job &j2)
{
         double t1;
         int t2;
         t1 = j1.salary;
         j1.salary = j2.salary;
         j2.salary = t1;
         t2 = j1.floor;
         j1.floor = j2.floor;
         j2.floor = t2;
}

void show(job &j)
{
     using namespace std;
     cout << j.name << ": " << j.salary << "zl na pietrze " << j.floor <<endl;
}
