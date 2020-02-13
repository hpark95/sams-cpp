#include <iostream>
using namespace std;

class Base {
public:
    int dummyVar;
};

class D1: protected Base {};

class D2: public D1 {};

int main() {
    D2 dummyD2Var;
    // dummyD2Var.dummyVar is inaccessible
    
    return 0;
}