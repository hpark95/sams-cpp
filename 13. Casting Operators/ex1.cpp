class Base {
public:
    virtual void DummyFunc() {}
};

class Derived: public Base {
public:
    void DerivedClassMethod() {}
};

void DoSomething(Base* objBase) {
    Derived* objDer = dynamic_cast<Derived*>(objBase);
    // You have to check if the cast succeeded by using if(objDer)
    if (objDer)
        objDer->DerivedClassMethod();
}