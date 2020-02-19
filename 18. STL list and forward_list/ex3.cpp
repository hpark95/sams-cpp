#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename T>
void DisplayContents(const T& container) {
    for(auto item: container)
        cout << item << " ";
    
    cout << endl;
}

int main() {
    list<int> lst{5, 10, 23, 13, 2};
    vector<int> vec{1, 26, 3};

    cout << "The list contains: ";
    DisplayContents(lst);

    cout << "The vector contains: ";
    DisplayContents(vec);

    int pos = 3;
    auto iter = lst.begin();
    advance(iter, pos);
    
    lst.insert(iter, vec.cbegin(), vec.cend());
    cout << "After inserting the vector into the list at position " << pos << \
        ": ";
    DisplayContents(lst);
    return 0;
}