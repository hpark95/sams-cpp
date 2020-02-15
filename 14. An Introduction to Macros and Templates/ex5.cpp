#include <iostream>
using namespace std;

template <typename T1, typename T2>
class arrPair {
private:
    T1 arr1[10];
    T2 arr2[10];

public:
    T1& GetFirstArrElement(int index) { 
        return arr1[index];
    }

    T2& GetSecondArrElement(int index) {
        return arr2[index];
    }
};