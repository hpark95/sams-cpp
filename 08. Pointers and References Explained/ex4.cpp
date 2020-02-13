#include <iostream>
using namespace std;

int main() {
    // // Incorrect code
    // int *pointToAnInt = new int;
    // pointToAnInt = 9; //pointToAnInt should contain an address, not an int
    // cout << "The value at pointToAnInt: " << *pointToAnInt;
    // delete pointToAnInt;
    // return 0;

    // Correct code
    int *pointToAnInt = new int;
    *pointToAnInt = 9; //pointToAnInt should contain an address, not an int
    cout << "The value at pointToAnInt: " << *pointToAnInt << endl;
    delete pointToAnInt;
    return 0;
}