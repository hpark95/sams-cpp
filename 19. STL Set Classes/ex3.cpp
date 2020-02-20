#include <iostream>
#include <set>
using namespace std;

template <typename T>
void DisplayContents(const T& container) {
    for(auto item: container) {
        cout << item << " ";
    }

    cout << endl;
}

int main() {
    set<int> set1{1, 2, 3, 4, 5};
    multiset<int> mset1(set1.cbegin(), set1.cend());

    cout << "set contains: ";
    DisplayContents(set1);

    cout << "multiset contains: ";
    DisplayContents(mset1);

    set1.insert(1);
    mset1.insert(1);
    cout << "After adding 1 to both set and multiset," << endl;
    cout << "set contains: ";
    DisplayContents(set1);

    cout << "multiset contains: ";
    DisplayContents(mset1);

}