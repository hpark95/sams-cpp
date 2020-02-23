#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<4> fourBits1(0b1010);

    cout << "fourBits1 contains: " << fourBits1 << endl;

    bitset<4> fourBits2(0b1111);

    cout << "fourBits2 contains: " << fourBits2 << endl;

    // Error
    // cout << "fourBits1 + fourBits2 contains: " << fourBits1 + fourBits2 << endl;

    bitset<4> result(fourBits1.to_ulong() + fourBits2.to_ulong());
    cout << "fourBits1.to_ulong() + fourBits2.to_ulong(): " << result << endl;

    return 0;
}