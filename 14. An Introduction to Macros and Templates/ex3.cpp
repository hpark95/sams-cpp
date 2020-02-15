#include <iostream>
using namespace std;

template <typename T>
void Swap(T& var1, T& var2) {
    T temp = var1;
    var1 = var2;
    var2 = temp;
}

int main() {
    int a = 3, b = 4;
    cout << "Before Swap(a, b): a = " << a << ", b = " << b << endl;
    Swap(a, b);
    cout << "After Swap(a, b): a = " << a << ", b = " << b << endl;

    double c = 1.53, d = 4.23;
    cout << "Before Swap(c, d): c = " << c << ", d = " << d << endl;
    Swap(c, d);
    cout << "After Swap(c, d): c = " << c << ", d = " << d << endl;

    return 0;
}