#include <iostream>
using namespace std;

class Grandparent {
  public:
    int x;
    void display() {
      cout << "x = " << x << endl;
    }
};

class Parent : public Grandparent {
  public:
    int y;
    void display() {
      cout << "x = " << x << ", y = " << y << endl;
    }
};

class Child : public Parent {
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
