class Base {
public:
    int dummyVar;
};

class Derived: Base {};

class DerivedPublic: public Base {};

class DerivedPrivate: private Base{};

int main() {
    Derived derived;
    DerivedPublic derivedPublic;
    DerivedPrivate derivedPrivate;

    // derived.dummyVar; is inaccessible
    derivedPublic.dummyVar;
    // derivedPrivate.dummyVar; is inacessible
    return 0;
}