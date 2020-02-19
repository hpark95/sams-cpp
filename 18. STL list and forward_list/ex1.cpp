#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> lst;

    int userInput;
    cout << "Please enter a number to insert: ";
    cin >> userInput;

    lst.push_front(userInput);
    
    cout << "Displaying contents of the list: ";
    for(auto item: lst)
        cout << item << " ";
    cout << endl;

    return 0;
}