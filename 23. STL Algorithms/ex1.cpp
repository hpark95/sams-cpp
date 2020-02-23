#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct UncasedStringCompare {
    bool operator()(const string& str1, const string& str2) const {
        string upperStr1(str1), upperStr2(str2);
        transform(str1.begin(), str1.end(), upperStr1.begin(), ::toupper);
        transform(str2.begin(), str2.end(), upperStr2.begin(), ::toupper);

        return upperStr1 < upperStr2;
    }
};

template <typename T>
void DisplayContents(const T& container) {
    for(auto item: container) {
        cout << item << endl;
    }
    cout << endl;
}

int main() {
    vector<string> names{"john", "Sara", "alice", "Bob"};
    
    cout << "The original string contains: " << endl;
    DisplayContents(names);

    sort(names.begin(), names.end());
    cout << "After sorting without a predicate: " << endl;
    DisplayContents(names);

    sort(names.begin(), names.end(), UncasedStringCompare());
    cout << "After sorting with case-insensitive comparison: " << endl;
    DisplayContents(names);
    
    return 0;
}