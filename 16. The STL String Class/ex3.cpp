#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i+=2) {
        str[i] = toupper(str[i]);
    }

    cout << str << endl;

    return 0;
}