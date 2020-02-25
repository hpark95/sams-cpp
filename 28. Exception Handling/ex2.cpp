#include <iostream>
using namespace std;

int main() {
    try {
        // We have to check if the allocation succeeded
        int* millionNums = new int[1000000];
        delete[] millionNums;
    } catch(bad_alloc& exp) {
        cout << "Exception encountered: " << exp.what() << endl;
    } catch(...) {
        cout << "Exception encountered" << endl;
    }

    return 0;
}