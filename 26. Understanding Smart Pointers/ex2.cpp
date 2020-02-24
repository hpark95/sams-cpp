#include <iostream>
#include <memory>
using namespace std;

class Fish {
public:
    Fish() {}
    ~Fish() {}

    virtual void Swim() {
        cout << "Fish swims" << endl;
    }
};

class Carp: public Fish {
public:
    Carp() {}
    ~Carp() {}

    void Swim() {
        cout << "Carp swims" << endl;
    }
};

void MakeFishSwim(const unique_ptr<Fish>& item) {
    item->Swim();
}

int main() {
    unique_ptr<Fish> carpPtr(new Carp);
    MakeFishSwim(carpPtr);

    return 0;
}