#include <iostream>
using namespace std;

const double PI = 3.141592;

void ComputeCircle(double radius, double &area, double &circumference);

int main() {
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    double area = 0, circumference = 0;
    ComputeCircle(radius, area, circumference);

    cout << "Area is: " << area << endl;
    cout << "Circumference is: " << circumference << endl;

    return 0;
}

void ComputeCircle(double radius, double& area, double& circumference) {
    area = radius * radius * PI;
    circumference = 2 * radius * PI;
}