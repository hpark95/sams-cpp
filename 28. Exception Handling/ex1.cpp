class SomeIntelligentStuff {
    bool isStuffGoneBad;

public:
    ~SomeIntelligentStuff() {
        // throwing in a destructor is a bad practice.
        // if(isStuffGoneBad)
        //     throw "Big problem in this class, just FYI";
    }
}