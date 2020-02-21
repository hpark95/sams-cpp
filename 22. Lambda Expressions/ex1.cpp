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
    vector<int> vec{1, 5, 3, 2, 4};
    cout << "The original vector contains: ";
    DisplayContents(vec);

    sort(vec.begin(), vec.end(), [](const int& num1, const int& num2) \
        {return (num1 > num2);});
    cout << "After sorting with the lambda function: ";
    DisplayContents(vec);
    
    return 0;
}