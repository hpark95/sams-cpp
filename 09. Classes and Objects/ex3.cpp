#include <iostream>
#include <string>
using namespace std;

class Human {
    int age;
    string name;

public:
    Human(int humansAge, string humansName)
        : age(humansAge), name(humansName) {}
};