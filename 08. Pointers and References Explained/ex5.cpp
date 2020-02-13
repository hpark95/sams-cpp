#include <iostream>
using namespace std;

int main() {
    // // Incorrect code
    // int pointToAnInt = new int; // pointToAnInt is an int, not a pointer
    // int* pNumberCopy = pointToAnInt; // cannot assign an int to a pointer
    // *pNumberCopy = 30;
    // cout << *pointToAnInt; // pointToAnInt is an int, not a pointer
    // delete pNumberCopy; // pNumberCopy is not initialized with new, so no need 
    //                     // to delete
    // delete pointToAnInt; // pointToAnInt is an int, not a pointer
    // return 0;

    // Correct code
    int* pointToAnInt = new int;
    int* pNumberCopy = pointToAnInt;
    *pNumberCopy = 30; // *pNumberCopy = data stored at the address of 
                        // pNumberCopy = data stored at the address of 
                        // pointToAnInt = 30
    cout << *pointToAnInt << endl;
    delete pointToAnInt;
    return 0;
}