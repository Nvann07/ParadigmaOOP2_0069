#include <iostream>
using namespace std;

class seseorrang {
  public:
  //virtual void pesan () = 0;
  virtual void pesan() {
    cout <<"Pesa dari sesorang"<<endl;
  }
};

class joko :public sesorang {
  public:
  void pesan()
}