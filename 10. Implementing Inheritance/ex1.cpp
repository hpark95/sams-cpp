#include <iostream>
using namespace std;

class Mammal {
public:
    Mammal() {
        cout << "Mammal constructor" << endl;
    }

    ~Mammal() {
        cout << "Mammal destructor" << endl;
    }
};

class Reptile {
public:
    Reptile() {
        cout << "Reptile constructor" << endl;
    }

    ~Reptile() {
        cout << "Reptile destructor" << endl;
    }
};

class Bird {
public:
    Bird() {
        cout << "Bird constructor" << endl;
    }

    ~Bird() {
        cout << "Bird destructor" << endl;
    }
};

class Platypus: public Mammal, public Reptile, public Bird {
public:
    Platypus() {
        cout << "Platypus constructor" << endl;
    }

    ~Platypus() {
        cout << "Platypus destructor" << endl;
    }
};

int main() {
    // Invokes Mammal constructor -> Reptile constructor -> Bird constructor 
    // -> Platypus constructor
    Platypus realFreak;

    // On termination, Mammal destructor -> Reptile destructor -> 
    // Bird destructor -> Platypus constructor
    return 0;
}