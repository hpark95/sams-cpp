#include <iostream>
using namespace std;

const double PI = 3.141592;

class Shape {
public:
    virtual ~Shape(){}
    virtual double Area() = 0;
    virtual void Print() = 0;
};

class Circle: public Shape {
public:
    double radius;

    Circle(double r): radius(r) {}

    double Area() override final {
        return radius * radius * PI;
    }

    void Print() override final {
        cout << "Circle" << endl;
    }
};

class Triangle: public Shape {
public:
    double base;
    double height;

    Triangle(double w, double h): base(w), height(h) {}

    double Area() override final {
        return base * height / 2;
    }

    void Print() override final {
        cout << "Triangle" << endl;
    }
};

int main() {
    Circle circ1(5);
    Triangle tri1(10, 5);

    cout << "Circle with radius = " << circ1.radius << endl;
    cout << "Area: " << circ1.Area() << endl;
    cout << "Print: ";
    circ1.Print();

    cout << "Triangle with base = " << tri1.base << ", height = " \
        << tri1.height << endl;
    cout << "Area: " << tri1.Area() << endl;
    cout << "Print: ";
    tri1.Print();

    return 0;
}