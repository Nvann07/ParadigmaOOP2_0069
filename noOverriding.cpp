#include <iostream>
using namespace std;

class baseClass {
  public:
   virtual void perkenalan () {
    cout << "Hallo saya Funcition dari base class";
   }
};
class derivedClass : public baseClass {
  public:
  void perkenalan() {
    cout << "Hallo saya Funcition dari derived class";
  }
};
int main () {
  derivedClass a;
  a.perkenalan();

  return 0;
}