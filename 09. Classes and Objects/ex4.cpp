#include <iostream>
using namespace std;

class Circle {
const double pi = 3.141592;
double radius = 0;

public:
    Circle(double radius): radius(radius) {}

    double GetCircumference() {
        return 2 * radius * pi;
    }

    double GetArea() {
        return radius * radius * pi;
    }
};

int main() {
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    Circle circ1(radius);
    cout << "The area of the circle with radius " << radius << " is: " << \
        circ1.GetArea() << endl;
    cout << "The circumference of the circle with radius " << radius << \
        " is: " << circ1.GetCircumference() << endl;

    return 0;
}