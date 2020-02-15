#include <iostream>
#include <string>
using namespace std;

template <typename T>
void Display(T val) {
    cout << val << " ";
}

template <typename T, typename... TR>
void Display(T val, TR... vals) {
    Display(val);
    Display(vals...);
}

int main() {
    cout << "Calling Display(3.42, 1, \"Hello\")" << endl;
    Display(3.42, 1, "Hello");
    cout << endl;
    
    return 0;
}