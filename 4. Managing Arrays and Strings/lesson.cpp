// LISTING 4.1 Declaring an Array of Integers and Accessing Its Elements

#include <iostream>

using namespace std;

int main() {
    int myNumbers [5] = {34, 56, -21, 5002, 365};

    cout << "First element at index 0: " << myNumbers[0] << endl;
    cout << "Second element at index 0: " << myNumbers[1] << endl;
    cout << "Third element at index 0: " << myNumbers[2] << endl;
    cout << "Fourth element at index 0: " << myNumbers[3] << endl;
    cout << "Fifth element at index 0: " << myNumbers[4] << endl;

    return 0;
}