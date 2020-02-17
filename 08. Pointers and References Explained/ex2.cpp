// Pass by value
// Parameters are copied when the function is called
int DoSomething(int num1, int num2);


// Pass by reference
// Parameters are NOT copied when the function is called
// When passed objects are large, this method is more efficient
int DoSomething(int& num1, int& num2);

// Pass by pointer
// Pointers are copied when the function is called
// However, this is still more memory efficient than the first method because 
// a pointer has a fixed memory size.
// Since a pointer's value can be invalid, we should be careful.
int DoSomething(int* num1, int* num2);