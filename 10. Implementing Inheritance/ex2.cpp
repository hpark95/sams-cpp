#include <iostream>
using namespace std;

class Shape {
public:
    Shape() {
        cout << "Shape is the base class." << endl;
    }
};

class Polygon: public Shape {
public:
    Polygon() {
        cout << "Polygon is a shape." << endl;
    }
};

class Triangle: public Polygon {
public:
    Triangle() {
        cout << "Triangle is a polygon." << endl;
    }
};

int main() {
    Triangle myTri;

    return 0;
}