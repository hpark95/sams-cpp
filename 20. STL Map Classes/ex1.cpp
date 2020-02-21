#include <iostream>
#include <string>
#include <map>
using namespace std;

template <typename T>
void DisplayMap(const T& container) {
    for(auto item: container) {
        cout << item.first << ": " << item.second << endl;
    }
}

int main() {
    multimap<string, string> contacts;
    contacts.insert(make_pair("John", "123"));
    contacts.insert(make_pair("John", "456"));

    cout << "multimap<string, string> instance for contacts contain: " << endl;
    DisplayMap(contacts);

    return 0;
}