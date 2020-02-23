#include <iostream>
#include <string>
#include <sstream>
#include <queue>
#include <vector>
using namespace std;

class Person {
public:
    int age;
    bool isFemale;
    string strOut;

    Person(int inputAge, bool inputFemale): age(inputAge), \
        isFemale(inputFemale) {}

    bool operator<(const Person& toCompare) const {
        if(age == toCompare.age)
            return isFemale;

        return age > toCompare.age;
    }
};