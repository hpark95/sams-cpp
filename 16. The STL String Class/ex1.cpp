#include <string>
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter input string: " << endl;
    getline(cin, str);
    
    string reversed(str);
    reverse(reversed.begin(), reversed.end());

    cout << "The reversed string is: " << endl;
    cout << reversed << endl << endl;

    if (str == reversed)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome" << endl;

    return 0;
}