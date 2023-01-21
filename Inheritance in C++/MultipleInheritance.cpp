#include <iostream>
using namespace std;

class Parent1 {
  public:
    int x;
    void display() {
      cout << "x = " << x << endl;
    }
};


class Parent2 {
  public:
    int y;
    void display() {
      cout << "y = " << y << endl;
    }
};

class Child : public Parent1, public Parent2 {
  public:
    int z;
    void display() {
      cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }
};

int main() {
    Child obj;
    obj.x = 10;
    obj.y = 20;
    obj.z = 30;
    obj.display();
    return 0;
}
