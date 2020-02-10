#include <iostream>
using namespace std;

int main() {
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int myNums1[ARRAY1_LEN] = {35, -3, 0};
    int myNums2[ARRAY2_LEN] = {20, -1};

    cout << "Multiplying each int in myNums1 by each in myNums2: " << endl;

    for (int i = ARRAY1_LEN - 1; i >= 0; --i) {
        for (int j = ARRAY2_LEN - 1; j >= 0; --j) {
            cout << myNums1[i] << " + " << myNums2[j] << " = " << myNums1[i] \
                + myNums2[j] << endl;
        }
    }

    return 0;
}