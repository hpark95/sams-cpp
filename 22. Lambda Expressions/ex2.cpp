#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void DisplayContents(const T& container) {
    for(auto item: container) {
        cout << item << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec{1, 4, 2, 3, 5};

    cout << "The original vector contains: ";
    DisplayContents(vec);

    int toAdd = 0;
    cout << "Enter a number to add: ";
    cin >> toAdd;

    for_each(vec.begin(), vec.end(), [toAdd](int& num){num += toAdd;});
    cout << "The vector now contains: ";
    DisplayContents(vec);

    return 0;
}