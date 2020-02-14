#include <iostream>
using namespace std;

class DynIntegers {
private:
    int* arr;

public:
    DynIntegers(const int* inputArr) { // Constructor
        if (inputArr != NULL) {
            int inputArrLen = (sizeof(inputArr)/sizeof(int)) + 1;
            arr = new int[inputArrLen];
            for (int i = 0; i < inputArrLen; ++i)
                arr[i] = inputArr[i];
        } else {
            arr = NULL;
        }
    }

    DynIntegers(DynIntegers& copySrc) { // Copy constructor
        if (copySrc.arr != NULL) {
            int copySrcLen = (sizeof(copySrc)/sizeof(int)) + 1;
            arr = new int[copySrcLen];
            for (int i = 0; i < copySrcLen; ++i)
                arr[i] = copySrc.arr[i];
        } else {
            arr = NULL;
        }
    }

    DynIntegers& operator= (const DynIntegers& copySrc) { // Copy assignment op.
        if ((this != &copySrc) && (copySrc.arr != NULL)) {
            if (arr != NULL)
                delete[] arr;

            int copySrcLen = (sizeof(copySrc)/sizeof(int)) + 1;
            arr = new int[copySrcLen];
            for (int i = 0; i < copySrcLen; ++i)
                arr[i] = copySrc.arr[i];
        }

        return *this;
    }


    DynIntegers(DynIntegers&& moveSrc) { // Move constructor
        arr = moveSrc.arr;
        moveSrc.arr = NULL;
    }

    DynIntegers& operator=(DynIntegers&& moveSrc) { // Move assignment op.
        if ((this != &moveSrc) && (moveSrc.arr != NULL)) {
            delete[] arr;
            arr = moveSrc.arr;
            moveSrc.arr = NULL;
        }

        return *this;
    }

    ~DynIntegers() {
        delete[] arr;
    }
};

int main() {
    int arr[] = {3, 5, 4};
    DynIntegers myArr(arr);

    return 0;
}