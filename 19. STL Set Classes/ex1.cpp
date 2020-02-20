#include <set>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void DisplayContents(const T& container) {
    for(auto item: container) {
        cout << item << endl;
    }
    
    cout << endl;
}

struct ContactItem {
    string name;
    string phoneNum;
    string displayAs;

    ContactItem(const string& nameInput, const string& phoneInput):
        name(nameInput), phoneNum(phoneInput) {
        displayAs = nameInput + ": " + phoneNum;
    }

    bool operator==(const ContactItem& toCompare) const {
        return (phoneNum == toCompare.phoneNum);
    }

    bool operator<(const ContactItem& toCompare) const {
        return (phoneNum < toCompare.phoneNum);
    }

    operator const char*() {
        return displayAs.c_str();
    }
};

int main() {
    set<ContactItem> contacts;
    contacts.insert(ContactItem("Alice", "738 142 3124"));
    contacts.insert(ContactItem("Bob", "123 456 7890"));
    contacts.insert(ContactItem("Carol", "312 410 2313"));

    cout << "Showing contacts: " << endl;
    DisplayContents(contacts);

    cout << "Enter a phone number: ";
    string phoneInput;
    getline(cin, phoneInput);

    set<ContactItem>::const_iterator iter = \
        contacts.find(ContactItem("", phoneInput));
    if(iter != contacts.cend()) {
        cout << "The owner of the phone number is: ";
        cout << iter->name << endl;
    } else {
        cout << "No contact found" << endl;
    }

    return 0;
}