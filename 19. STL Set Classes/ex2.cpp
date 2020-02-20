#include <iostream>
#include <string>
#include <set>
using namespace std;

template <typename T>
void DisplayPairContainer(const T& container) {
    for(auto item: container) {
        cout << item.first << ": " << item.second << endl;
    }
}

int main() {
    multiset<pair<string, string>> dict;
    dict.insert(make_pair("Alice", "a student"));
    dict.insert(make_pair("Bob", "a child"));
    DisplayPairContainer(dict);

    return 0;
}