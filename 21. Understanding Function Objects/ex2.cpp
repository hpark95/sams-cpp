#include <iostream>
#include <vector>
using namespace std;

template <typename T>
struct DoubleNum {
    int count;

    DoubleNum(): count(0) {}

    void operator()(T& num) {
        num *= 2;
        ++count;
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

    DoubleNum<int> dbFunc = for_each(vec.begin(), vec.end(), DoubleNum<int>());
    cout << "After applying DoubleNum() to each element: ";
    DisplayContents(vec);

    cout << "DoubleNum was invoked " << dbFunc.count << " times." << endl;
    return 0;
}