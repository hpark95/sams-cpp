#include <iostream>
using namespace std;

float computeCircumference(float radius);
float computeArea(float radius);

int main() {
    float radius = 0;

    cout << "Please enter the radius: ";
    cin >> radius;

    cout << "The circumference of a circle with radius " << radius << " is: ";
    cout << computeCircumference(radius) << endl;

    cout << "The area of a circle with radius " << radius << " is: ";
    cout << computeArea(radius) << endl;

    return 0;
}

float computeCircumference(float radius) {
    const float pi = 3.141592;
    
    return 2 * pi * radius;
}

float computeArea(float radius) {
    const float pi = 3.141592;

    return radius * radius * pi;
}