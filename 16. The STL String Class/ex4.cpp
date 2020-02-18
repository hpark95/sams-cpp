#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1("I");
    string str2("Love");
    string str3("STL");
    string str4("String.");

    string combined = str1 + " " + str2 + " " + str3 + " " + str4;

    cout << combined << endl;

    return 0;
}