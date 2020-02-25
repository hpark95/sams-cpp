int main() {
    try {
        int* millionNums = new int[1000000];
        delete[] millionNums;
    } catch(exception& exp) {
        // Allocating new memory in catch is inappropriate because 
        // we may have entered this catch statement due to bad_alloc.
        // int* anotherMillion = new int[1000000];
    }
}