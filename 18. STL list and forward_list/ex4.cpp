#include <iostream>
#include <string>
#include <list>
using namespace std;

template <typename T>
void DisplayContents(const T& container) {
    for(auto item: container)
        cout << item << " ";
    
    cout << endl;
}

int main() {
    list<string> lst{"I", "love", "C++."};
    
    cout << "The original list contains: ";
    DisplayContents(lst);

    lst.sort();
    cout << "After sorting with the default predicate, the list contains: ";
    DisplayContents(lst);

    lst.sort([](string str1, string str2){return (str1 > str2);});
    cout << "After sorting in the descending order, the list contains: ";
    DisplayContents(lst);

    lst.reverse();
    cout << "After reversing, the list contains: ";
    DisplayContents(lst);
    return 0;
}