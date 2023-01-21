#include <iostream>
using namespace std;

// Base class - Shape
class Shape {
  public:
    double area;
    void displayArea() {
        cout << "Area: " << area << endl;
    }
};

// Derived class 1 - Rectangle
class Rectangle : public Shape {
  public:
    double length;
    double width;
    void setDimensions(double l, double w) {
        length = l;
        width = w;
        area = length * width;
    }
};

// Derived class 2 - Circle
class Circle : public Shape {
  public:
    double radius;
    void setRadius(double r) {
        radius = r;
        area = 3.14 * radius * radius;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 10);
    rect.displayArea(); // prints "Area: 50"

    Circle circle;
    circle.setRadius(2);
    circle.displayArea(); // prints "Area: 12.56"

    return 0;
}

