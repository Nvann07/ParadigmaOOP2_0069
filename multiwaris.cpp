#include <iostream>
using namespace std;

class orang {
  public:
  int umur;

  orang(int pUmur) :
  umur(pUmur)
  {
    cout << "orang dibuat dengan umur" << "\n" << endl;
  }
};

class pekerja : virtual public orang {
  public:
  
  pekerja(int pUmur) :
  orang(pUmur)
  {
    cout  << "pelajar dibuat \n" << endl;
  }
};

class peljar : virtual public orang {
  public:
  pelajar(int PUmur) :
  orang(pUmur)
  {
      cout << "pelajar dibuat\n" << endl;
  } 
};