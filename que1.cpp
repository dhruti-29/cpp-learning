#include <iostream>
using namespace std;

class Shape {
public:
    virtual void displayArea() = 0;
};

// Circle
class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void displayArea() {
        cout << "Area of Circle : "
             << 3.14 * radius * radius << endl;
    }
};

// Rectangle
class Rectangle : public Shape {
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void displayArea() {
        cout << "Area of Rectangle : "
             << length * width << endl;
    }
};

// Triangle
class Triangle : public Shape {
    float base, height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void displayArea() {
        cout << "Area of Triangle : "
             << 0.5 * base * height << endl;
    }
};

int main() {

    Circle c(5);
    Rectangle r(2, 4);
    Triangle t(3, 8);

    Shape* s;

    s = &c;
    s->displayArea();

    s = &r;
    s->displayArea();

    s = &t;
    s->displayArea();

    return 0;
}