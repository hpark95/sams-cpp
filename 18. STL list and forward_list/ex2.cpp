#include <iostream>
#include <list>
using namespace std;

template <typename T>
void DisplayContents(const T& container) {
    for(auto item: container)
        cout << item << " ";

    cout << endl;
}

int main() {
    list<int> lst{1, 381, 23, 502, 135};

    cout << "The original list contains: ";
    DisplayContents(lst);

    list<int>::iterator iter = lst.begin();
    // Test with different iterators
    // advance(iter, 4);
    cout << "iter points to: " << *iter << endl;

    cout << "After inserting elements at the beginning, the list contains: ";
    list<int> lstToAppend{2, 515, 23};
    lst.insert(lst.begin(), lstToAppend.begin(), lstToAppend.end());
    DisplayContents(lst);

    cout << "iter points to: " << *iter << endl;

    return 0;
}