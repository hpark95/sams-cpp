#include <iostream>
using namespace std;

const double PI = 3.141592;

double Volume(double radius);
double Volume(double radius, double height);

int main() {
    cout << "Enter 's' for sphere and 'c' for cylinder: ";
    char userInput = '\0';
    cin >> userInput;

    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    if (userInput == 's') {
        cout << "Volume is: " << Volume(radius) << endl;
    } else {
        cout << "Enter height: ";
        double height = 0;
        cin >> height;
        cout << "Volume is: " << Volume(radius, height) << endl;
    }

    return 0;
}

double Volume(double radius) {
    return 4/3 * radius * radius * radius * PI;
}

double Volume(double radius, double height) {
    return radius * radius * PI * height;
}