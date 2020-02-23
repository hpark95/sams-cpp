#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> bits(0b10010111);
    cout << "The original bitset contains: " << bits << endl;

    bits.flip();
    cout << "flip() results in: " << bits << endl;
    
    return 0;
}