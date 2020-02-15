class Fish {
public:
    virtual ~Fish() {}
};

class Tuna: public Fish {
public:
    void checkTuna() {}
};

int main() {
    Fish* objFish = new Tuna;
    // We can use static_cast because we know the object being casted is Tuna
    Tuna* pTuna = static_cast<Tuna*>(objFish);
    pTuna->checkTuna();

    delete pTuna;

    return 0;
}