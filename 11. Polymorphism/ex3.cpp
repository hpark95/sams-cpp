#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor" << endl;
    }
    ~Vehicle() {
        cout << "Vehicle destructor" << endl;
    }
};

class Car: public Vehicle {
public:
    Car() {
        cout << "Car constructor" << endl;
    }
    ~Car() {
        cout << "Car destructor" << endl;
    }
};

int main() {
    Vehicle* pMyRacer = new Car;

    // Vehicle constructor -> Car constructor -> Vehicle destructor
    // Car destructor not invoked
    delete pMyRacer;

    return 0;
}