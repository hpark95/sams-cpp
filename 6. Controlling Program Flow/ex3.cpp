#include <iostream>
using namespace std;

int main() {
    cout << "How many Fibonacci numbers do you want to compute? ";
    int numToCompute = 0;
    cin >> numToCompute;

    int num1 = 0, num2 = 1;
    cout << num1 << " " << num2 << " ";

    for (int i = 0; i < numToCompute; ++i) {
        int tempNum2 = num2;
        num2 = num1 + num2;
        num1 = tempNum2;

        cout << num2 << " ";
    }

    cout << endl;

    return 0;
}