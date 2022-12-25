#include <iostream>
using namespace std;

class Door {
  private:
    int length;
    int height;

  public:
    Door(int len, int hgt) {
      length = len;
      height = hgt;
    }

    Door(Door &obj) {
      length = obj.length;
      height = obj.height;
    }

    int calculateArea() {
      return length * height;
    }
};

int main() {
  Door Door1(10, 6);

  Door Door2 = Door1;

  cout << "Area of Door 1: " << Door1.calculateArea() << endl;
  cout << "Area of Door 2: " << Door2.calculateArea();

  return 0;
}