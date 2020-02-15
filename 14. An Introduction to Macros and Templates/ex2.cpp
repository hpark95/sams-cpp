#include <iostream>
using namespace std;

template <typename T>
T Mult(const T& a, const T& b) {
    return a * b;
}

int main() {
    cout << "Mult(3, 4) = " << Mult(3, 4) << endl;
    cout << "Mult(3.12, 4.23) = " << Mult(3.12, 4.23) << endl;

    return 0;
}