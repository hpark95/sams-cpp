// // LISTING 3.1 Using Variables to Store Numbers and the Result of Their Multiplication

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "This program will help you multiply two numbers" << endl;

//     cout << "Enter your first number: ";
//     int firstNumber = 0;
//     cin >> firstNumber;

//     cout << "Enter your second number: ";
//     int secondNumber = 0;
//     cin >> secondNumber;

//     // Multiply two numbers, store result in a variable
//     int multiplicationResult = firstNumber * secondNumber;

//     // Display result
//     cout << firstNumber << " x " << secondNumber;
//     cout << " = " << multiplicationResult << endl;

//     return 0;
// }



// // LISTING 3.2 Demonstrating the Scope of the Variable

// #include <iostream>
// using namespace std;

// void MultiplyNumbers() {
//     cout << "Enter your first number: ";
//     int firstNumber = 0;
//     cin >> firstNumber;

//     cout << "Enter your second number: ";
//     int secondNumber = 0;
//     cin >> secondNumber;

//     // Multiply two numbers, store result in a variable
//     int multiplicationResult = firstNumber * secondNumber;

//     // Display result
//     cout << firstNumber << " x " << secondNumber;
//     cout << " = " << multiplicationResult << endl;

// }

// int main() {
//     cout << "This program will help you multiply two numbers" << endl;

//     // Call the function that does all the work
//     MultiplyNumbers();

//     // cout << firstNumber << " x " << secondNumber;
//     // cout << " = " << multiplicationResult << endl;

//     return 0;
// }



// // LISTING 3.3 Using Global Variables

// #include <iostream>
// using namespace std;

// // three global integers
// int firstNumber = 0;
// int secondNumber = 0;
// int multiplicationResult = 0;

// void MultiplyNumbers() {
//     cout << "Enter your first number: ";
//     cin >> firstNumber;

//     cout << "Enter your second number: ";
//     cin >> secondNumber;

//     // Multiply two numbers, store result in a variable
//     multiplicationResult = firstNumber * secondNumber;

//     // Display result
//     cout << "Displaying from MultiplyNumbers(): ";
//     cout << firstNumber << " x " << secondNumber;
//     cout << " = " << multiplicationResult << endl;

// }

// int main() {
//     cout << "This program will help you multiply two numbers" << endl;

//     // Call the function that does all the work
//     MultiplyNumbers();

//     cout << "Displaying from main(): ";

//     // This line will now compile and work!
//     cout << firstNumber << " x " << secondNumber;
//     cout << " = " << multiplicationResult << endl;

//     return 0;
// }



// // LISTING 3.4 Demonstrating Ill-Effects of Signed and Unsigned Integer Overflow Errors

// #include <iostream>
// using namespace std;

// int main() { 
//     unsigned short uShortValue = 65535;
//     cout << "Incrementing unsigned short " << uShortValue << " gives: ";
//     cout << ++uShortValue << endl;

//     short signedShort = 32767;
//     cout << "Incrementing signed short " << signedShort << " gives: ";
//     cout << ++signedShort << endl;

//     return 0;
// }



// // LISTING 3.5 Finding the Size of Standard C++ Variable Types

// #include <iostream>

// int main() {
//     using namespace std;
//     cout << "Computing the size of some C++ inbuilt variable types" << endl;

//     cout << "Size of bool: " << sizeof(bool) << endl;
//     cout << "Size of char: " << sizeof(char) << endl;
//     cout << "Size of unsigned short int" << sizeof(unsigned short) << endl;
//     cout << "Size of short int" << sizeof(short) << endl;
//     cout << "Size of unsigned long int" << sizeof(unsigned long) << endl;
//     cout << "Size of long: " << sizeof(long) << endl;
//     cout << "Size of int: " << sizeof(int) << endl;
//     cout << "Size of unsigned long long: " << sizeof(unsigned long long) << endl;

//     cout << "Size of long long: " << sizeof(long long) << endl;
//     cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
//     cout << "Size of float: " << sizeof(float) << endl;
//     cout << "Size of double: " << sizeof(double) << endl;

//     cout << "The output changes with compiler, hardware and OS" << endl;

//     return 0;
// }



// // LISTING 3.6 Using the auto Keyword and Relying on the Compiler's Type-Inference Capabilites

// #include <iostream>
// using namespace std;

// int main() {
//     auto coinFlippedHeads = true;
//     auto largeNumber = 2'500'000'000'000;

//     cout << "coinFliippedHeads = " << coinFlippedHeads;
//     cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;
    
//     cout << "largeNumber = " << largeNumber;
//     cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;

//     return 0;
// }



// // LISTING 3.7 Declaring a Constant Called pi

// #include <iostream>

// int main() {
//     using namespace std;

//     const double pi = 22.0 / 7;
//     cout << "The value of constant pi is: " << pi << endl;

//     // Uncomment next line to view compile failure
//     // pi = 345;

//     return 0;
// }



// // LISTING 3.8 Using constexpr to Calculate Pi

// #include <iostream>
// constexpr double GetPi() { return 22.0 / 7; }
// constexpr double TwicePi() { return 2 * GetPi(); }

// int main() {
//     using namespace std;
//     const double pi = 22.0 / 7;

//     cout << "constant pi contains value " << pi << endl;
//     cout << "constexpr GetPi() returns value " << GetPi() << endl;
//     cout << "constexpr TwicePi() returns value " << TwicePi() << endl;

//     return 0; 
// }



// LISTING 3.9 Using Enumerated Values to Indicate Cardinal Wind Directions

#include <iostream>
using namespace std;

enum CardinalDirections {
    North = 25,
    South,
    East,
    West
};

int main() {
    cout << "Displaying directions and their symbolic values" << endl;
    cout << "North: " << North << endl;
    cout << "South: " << South << endl;
    cout << "East: " << East << endl;
    cout << "West: " << West << endl;

    CardinalDirections windDirection = South;
    cout << "Variable windDirection = " << windDirection << endl;

    return 0;
}