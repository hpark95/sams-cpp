#include <iostream>
#include <string>
using namespace std;

class Human {
    int age;
    string name;

public:
    Human(int inputAge, string inputName): age(inputAge), name(inputName) {}

    int GetAge() {
        return age;
    }

    string GetName() {
        return name;
    }
};

int main() {
    Human firstHuman(21, "Alice");

    cout << firstHuman.GetName() <<  "'s age is: " << firstHuman.GetAge() \
        << endl;

    return 0;
}