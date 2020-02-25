#include <iostream>
using namespace std;

int main() {
    cout << "Enter a boolean value 0 or 1 for value1: ";
    bool value1 = false;
    cin >> value1;

    cout << "Enter another boolean value 0 or 1 for value2: ";
    bool value2 = false;
    cin >> value2;

    cout << "Result of AND, OR, and XOR on value1 and value2: " << endl;
    cout << "value1 & value2: " << (value1 & value2) << endl;
    cout << "alue1 | value2: " << (value1 | value2) << endl;
    cout << "value1 ^ value2: " << (value1 ^ value2) << endl;
    
    return 0;
}