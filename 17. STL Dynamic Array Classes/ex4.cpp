#include <iostream>
#include <string>
#include <deque>
using namespace std;

template <typename T>
void PrintDeque(const deque<T>& deq) {
    // for(auto iter = deq.cbegin(); iter < deq.cend(); ++iter)
    //     cout << *iter << " ";

    // cout << endl;

    for(auto elem: deq)
        cout << elem << " ";

    cout << endl;
}

int main() {
    deque<string> deq= {"Hello"s, "Containers are cool!"s, "C++ is evolving!"s};

    PrintDeque(deq);

    return 0;
}