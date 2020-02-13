#include <iostream>
using namespace std;

int main() {
    int number = 3;
    int* pNum1 = &number; // pNum1 = address of 'number'
    *pNum1 = 20; // data stored in the address of 'number' = 20
    int* pNum2 = pNum1; //pNum2 = pNum1 = address of 'number'
    number *= 2; // data stored in the address of 'number' = 40
    cout << *pNum2; // print the data stored in the address of 'number' = 40

    return 0;
}