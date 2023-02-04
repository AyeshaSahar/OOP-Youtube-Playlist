#include <iostream>

class Shape {
public:
    virtual int area() { return 0; }
};

class Triangle : public Shape {
public:
    int base, height;
    Triangle(int b, int h) : base(b), height(h) {}
    int area() { return (base * height) / 2; }
};

class Rectangle : public Shape {
public:
    int width, height;
    Rectangle(int w, int h) : width(w), height(h) {}
    int area() { return width * height; }
};

int main() {
    Shape *shape;
    Triangle triangle(10, 5);
    Rectangle rectangle(10, 5);

    shape = &triangle;
    std::cout << "Triangle Area: " << shape->area() << std::endl;

    shape = &rectangle;
    std::cout << "Rectangle Area: " << shape->area() << std::endl;

    return 0;
}
