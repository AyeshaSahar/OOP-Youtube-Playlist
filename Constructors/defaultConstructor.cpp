#include <iostream>
using namespace std;

class Door {
  public:
  int length;

  public:
  Door(){
    length = 5;
    cout << "Length of our door is: "<< length ;
  }
};

int main() {
  Door doorA;

  return 0;
}