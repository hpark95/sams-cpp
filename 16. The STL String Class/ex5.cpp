#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Good day String! Today is beautiful!";
    cout << "Sample string is: " << endl;
    cout << str << endl;

    size_t charPos = str.find('a', 0);

    while (charPos != string::npos) {
        cout << "\'a\' found in position " << charPos << endl;
        charPos = str.find('a', charPos + 1);
    }

    return 0;
}