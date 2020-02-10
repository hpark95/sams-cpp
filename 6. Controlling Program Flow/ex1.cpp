#include <iostream>
using namespace std;

int main() {
    const int ARRAY_LENGTH = 10;
    int arr[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

    for(int i = ARRAY_LENGTH - 1; i >= 0; --i) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }

    return 0;
}