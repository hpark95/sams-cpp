#include <iostream>
#include <map>
using namespace std;

template <typename T>
void DisplayMap(const T& container) {
    for(auto item: container) {
        cout << item.first << ": " << item.second << endl;
    }
    cout << endl;
}

int main() {
    map<int, string> map1;

    map1[1] = "One";
    map1[2] = "Two";
    cout << "map contains: " << endl;
    DisplayMap(map1);

    multimap<int, string> mmap1;

    mmap1.insert(make_pair(1, "One"));
    mmap1.insert(make_pair(2, "Two"));
    cout << "multimap contains: " << endl;
    DisplayMap(mmap1);

    map1.insert(make_pair(1, "One"));
    mmap1.insert(make_pair(1, "One"));

    cout << "After adding (1, \"One\") to both map and multimap," << endl;
    cout << "map contains: " << endl;
    DisplayMap(map1);

    cout << "multimap contains: " << endl;
    DisplayMap(mmap1);
    
    return 0;
}