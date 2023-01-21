#include <iostream>
using namespace std;

class Parent {
  public:
    int x;
    void display() {
      cout << "x = " << x << endl;
    }
};

class Child : public Parent {
  public:
    int y;
    void display() {
      cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Child obj;
    obj.x = 10;
    obj.y = 30;

    obj.display();

    return 0;
}
