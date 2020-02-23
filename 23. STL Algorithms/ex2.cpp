#include <iostream>
#include <vector>
#include <deque>
#include <list>
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
    vector<int> vec{1, 6, 2, 3, 4};
    cout << "vector<int> contains: ";
    DisplayContents(vec);

    deque<int> dq;
    dq.resize(vec.size());
    copy(vec.cbegin(), vec.cend(), dq.begin());
    cout << "After copy(), deque<int> contains: ";
    DisplayContents(dq);

    list<int> lst;
    lst.resize(dq.size());
    copy_backward(dq.cbegin(), dq.cend(), lst.end());
    cout << "After copy_backward, list<int> contains: ";
    DisplayContents(lst);

    return 0;
}
