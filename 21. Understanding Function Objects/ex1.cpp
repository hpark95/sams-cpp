#include <iostream>
#include <vector>
using namespace std;

template <typename T>
struct DoubleNum {
    void operator()(T& num) {
        num *= 2;
    }
};

template <typename T>
void DisplayContents(const T& container) {
    for(auto item: container)
        cout << item << " ";
    cout << endl;
}

int main() {
    vector<int> vec{1, 2, 3, 4};
    
    cout << "The original vector contains: ";
    DisplayContents(vec);

    for_each(vec.begin(), vec.end(), DoubleNum<int>());
    // // lambda version
    // for_each(vec.begin(), vec.end(), [](int& num){num *= 2;});
    cout << "After applying DoubleNum() to each element: ";
    DisplayContents(vec);
    return 0;
}