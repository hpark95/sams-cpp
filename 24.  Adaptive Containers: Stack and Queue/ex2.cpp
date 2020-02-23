#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string str;

    cout << "Please enter a string: ";
    getline(cin, str);

    stack<char> chStack;
    for(auto iter = str.cbegin(); iter != str.cend(); ++iter) {
        chStack.push(*iter);
    }

    while(!chStack.empty()) {
        cout << "Top of the stack: " << chStack.top() << endl;
        chStack.pop();
    }

    cout << "Stack is now empty!" << endl;

    return 0;
}