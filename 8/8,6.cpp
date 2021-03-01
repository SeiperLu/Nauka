#include<iostream>
using namespace std;
struct sysop
{
       char name[26];
       char quote[64];
       int used;
};

const sysop & use(sysop & sysopref);

int main()
{
    sysop looper = 
    {
          "Rick \"Fortran\" Looper",
          "Rowny ze mnie gosc.",
          0
    };
    
    use(looper);
    cout << "Looper: " << looper.used << " razy uzyty\n";
    sysop copycat;
    copycat = use(looper);
    cout << "Looper: " << looper.used << " razy uzyty\n";
    cout << "Copycat: " << copycat.used << " razy uzyty\n";
    cout << "use(looper): " << use(looper).used << " razy uzyty\n";
    cin.get();
    cin.get();
    return 0;
}

const sysop & use(sysop & sysopref)
{
      cout << sysopref.name << " mowi:\n";
      cout << sysopref.quote << endl;
      sysopref.used++;
      return sysopref;
}
    
