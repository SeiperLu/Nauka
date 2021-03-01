#include<iostream>
#include<new>

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main()
{
    using namespace std;
    double *pd1, *pd2;
    int i;
    cout << "Wywo�anie new zwyklego i miejscowego:\n";
    pd1 = new double[N];
    pd2 = new (buffer) double[N];
    for (i = 0; i < N; i++)
        pd2[i] = pd1[i] = 1000 + 20.0 * i;
    cout << "Adresy buforow;\n" << " sterta: " << pd1 << " pamiec statyczna: "
         << (void*) buffer << endl;
    cout << "Zawartosc bufora:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " pod adresem " << &pd1[i] << "; ";
        cout << pd2[i] << " pod adresem " << &pd2[i] << endl;
    }
    
    cout << "\nDrugie wywlanie zwyklego i miejscowego new:\n";
    double *pd3, *pd4;
    pd3 = new double[N];
    pd4 = new (buffer) double[N];
    for (i = 0; i < N; i++)
        pd4[i] = pd3[i] = 1000 + 20.0 * i;
    cout << "Zawartosc bufora:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd3[i] << " pod adresem " << &pd3[i] << "; ";
        cout << pd4[i] << " pod adresem " << &pd4[i] << endl;
    }
    
    cout << "\nTrzecie wywolanie zwyklego i miejscowego new:\n";
    delete [] pd1;
    pd1 = new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N];
    for(i = 0; i < N; i++)
          pd2[i] = pd1[i] = 1000 + 20.0 * i;
    cout << "Zawartosc bufora:\n";
    for (i = 0; i < N; i++)
    {
        cout << pd1[i] << " pod adresem " << &pd1[i] << "; ";
        cout << pd2[i] << " pod adresem " << &pd2[i] << endl;
    }
    delete [] pd1;
    delete [] pd3;
    cin.ignore();
    return 0;
}
    
    
