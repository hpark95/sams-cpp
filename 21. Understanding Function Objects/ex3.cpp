#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void DisplayContents(const T& container) {
    for(auto item: container)
        cout << item << " ";
    cout << endl;
}

template <typename T>
struct AscendingSortPredicate {
    bool operator()(const T& num1, const T& num2) {
        return (num1 < num2);
    }
};

int main() {
    vector<int> vec{1, 5, 2, 4, 3, 0};

    cout << "The original vector contains: ";
    DisplayContents(vec);

    sort(vec.begin(), vec.end(), AscendingSortPredicate<int>());

    cout << "After sorting: ";
    DisplayContents(vec);

    return 0;
}