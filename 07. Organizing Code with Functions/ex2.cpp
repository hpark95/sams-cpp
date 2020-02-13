#include <iostream>
using namespace std;

void DisplayNums(double myNums[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << myNums[i] << " ";
    }

    cout << endl;
}

int main() {
    const int ARRAY_LEN = 5;
    double myNums[ARRAY_LEN] = {3.5, 2.1, 2.3, 4.2, 1.9};

    DisplayNums(myNums, ARRAY_LEN);

    return 0;
}