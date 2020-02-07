// // LISTING 5.1 Demonstrate Arithmetic Operators on Integers Input by the 
// // User

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Enter two integers: " << endl;
//     int num1 = 0, num2 = 0;
//     cin >> num1;
//     cin >> num2;

//     cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
//     cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
//     cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//     cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
//     cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

//     return 0;
// }



// // LISTING 5.2 Demonstrate the Difference Between Postfix and Prefix 
// // Operations

// #include <iostream>
// using namespace std;

// int main() {
//     int startValue = 101;
//     cout << "Start value of integer being operated: " << startValue << endl;

//     int postfixIncrement = startValue++;
//     cout << "Result of Postfix Increment = " << postfixIncrement << endl;
//     cout << "After Postfix Increment, startValue = " << startValue << endl;

//     startValue = 101; // Reset
//     int prefixIncrement = ++startValue;
//     cout << "Result of Postfix Increment = " << prefixIncrement << endl;
//     cout << "After Postfix Increment, startValue = " << startValue << endl;

//     startValue = 101; // Reset
//     int postfixDecrement = startValue--;
//     cout << "Result of Postfix Increment = " << postfixDecrement << endl;
//     cout << "After Postfix Increment, startValue = " << startValue << endl;

//     startValue = 101; // Reset
//     int prefixDecrement = --startValue;
//     cout << "Result of Postfix Increment = " << prefixDecrement << endl;
//     cout << "After Postfix Increment, startValue = " << startValue << endl;

//     return 0;
// }



// // LISTING 5.3 Demonstrating Equality and Relational Operators

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Enter two integers: " << endl;
//     int num1 = 0, num2 = 0;
//     cin >> num1;
//     cin >> num2;

//     bool isEqual = (num1 == num2);
//     cout << "Result of equality test: " << isEqual << endl;

//     bool isUneqal = (num1 != num2);
//     cout << "Result of unequality test: " << isUneqal << endl;

//     bool isGreaterThan = (num1 > num2);
//     cout << "Result of " << num1 << " > " << num2 << " test: " \
//         << isGreaterThan << endl;

//     bool isLessThan = (num1 < num2);
//     cout << "Result of " << num1 << " < " << num2 << " test: " \
//         << isLessThan << endl;

//     bool isGreaterThanEquals = (num1 >= num2);
//     cout << "Result of " << num1 << " >= " << num2 << " test: " \
//         << isGreaterThanEquals << endl;

//     bool isLessThanEquals = (num1 <= num2);
//     cout << "Result of " << num1 << " <= " << num2 << " test: " \
//         << isLessThanEquals << endl;

//     return 0;
// }



// // LISTING 5.4 Analyzing C++ Logical Operators && and ||

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Enter true(1) or false(0) for two operands: " << endl;
//     bool op1 = false, op2 = false;
//     cin >> op1;
//     cin >> op2;

//     cout << op1 << " AND " << op2 << " = " << (op1 && op2) << endl;
//     cout << op1 << " OR " << op2 << " = " << (op1 || op2) << endl;

//     return 0;
// }



// // LISTING 5.5 Using Logical NOT (!) and Logical AND (&&) Operators in if 
// // Statements for Conditional Processing

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Use boolean values (0 / 1) to answer the questions" << endl;

//     cout << "Is it raining? ";
//     bool isRaining = false;
//     cin >>  isRaining;

//     cout << "Do you have buses on the streets? ";
//     bool busesPly = false;
//     cin >> busesPly;

//     if (isRaining && !busesPly)
//         cout << "You cannot go to work" << endl;
//     else
//         cout << "You can go to work" << endl;

//     if (isRaining && busesPly)
//         cout << "Take an umbrella" << endl;

//     if ((!isRaining) && busesPly)
//         cout << "Enjoy the sun and have a nice day" << endl;

//     return 0;
// }



// // LISTING 5.6 Using Logical NOT and Logical OR Operators to Help You Decide 
// // If You Can Buy That Dream Car

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Answer questions with 0 or 1" << endl;
//     cout << "Is there a discount on your favorite car? ";
//     bool onDiscount = false;
//     cin >> onDiscount;

//     cout << "Did you get a fantastic bonus? ";
//     bool fantasticBonus = false;
//     cin >> fantasticBonus;

//     if (onDiscount || fantasticBonus)
//         cout << "Congratulations, you can buy that car!" << endl;
//     else
//         cout << "Sorry, waiting a while is a good idea" << endl;

//     if (!onDiscount)
//         cout << "Car not on discount" << endl;
    
//     return 0;
// }



// // LISTING 5.7 Demonstrating the Use of Bitwise Operators to Perform NOT, 
// // AND, OR, and XOR on Individual Bits in an Integer

// #include <iostream>
// #include <bitset>
// using namespace std;

// int main() {
//     cout << "Enter a number (0 - 255): ";
//     unsigned short inputNum = 0;
//     cin >> inputNum;

//     bitset<8> inputBits (inputNum);
//     cout << inputNum << " in binary is " << inputBits << endl;

//     bitset<8> bitwiseNOT = (~inputNum);
//     cout << "Logical NOT ~" << endl;
//     cout << "~" << inputBits << " = " << bitwiseNOT << endl;

//     cout << "Logical AND, & with 00001111" << endl;
//     bitset<8> bitwiseAND = (0x0F & inputNum);
//     cout << "00001111 & " << inputBits << " = " << bitwiseAND << endl;

//     cout << "Logical OR, | with 00001111" << endl;
//     bitset<8> bitwiseOR = (0x0F | inputNum);
//     cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;

//     cout << "Logical XOR, ^ with 00001111" << endl;
//     bitset<8> bitwiseXOR = (0x0F ^ inputNum);
//     cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << endl;

//     return 0;
// }



// // LISTING 5.8 Using Bitwise Right Shift operator (>>) to Quarter and Half and 
// // Left Shift (<<) to Double and Quadruple an Input Integer

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Enter a number: ";
//     int inputNum = 0;
//     cin >> inputNum;

//     int halfNum = inputNum >> 1;
//     int quarterNum = inputNum >> 2;
//     int doubleNum = inputNum << 1;
//     int quadrupleNum = inputNum << 2;

//     cout << "Quarter: " << quarterNum << endl;
//     cout << "Half: " << halfNum << endl;
//     cout << "Double: " << doubleNum << endl;
//     cout << "Quadruple: " << quadrupleNum << endl;

//     return 0;
// }



// // LISTING 5.9 Using Compound Assignment Operators to Add; Subtract; Divide; 
// // Perform Modulus; Shift; and Perform Bitwise OR, AND, and XOR

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Enter a number: ";
//     int value = 0;
//     cin >> value;

//     value += 8;
//     cout << "After += 8, value = " << value << endl;
//     value -= 2;
//     cout << "After -= 2, value = " << value << endl;
//     value /= 4;
//     cout << "After /= 4, value = " << value << endl;
//     value *= 4;
//     cout << "After *= 4, value = " << value << endl;
//     value %= 1000;
//     cout << "After %= 1000, value = " << value << endl;

//     // Note: hencefort assignment happens within cout
//     cout << "After <<= 1, value = " << (value <<= 1) << endl;
//     cout << "After >>= 2, value = " << (value >>= 2) << endl;

//     cout << "After |= 0x55, value = " << (value |= 0x55) << endl;
//     cout << "After ^= 0x55, value = " << (value ^= 0x55) << endl;
//     cout << "After &= 0x0F, value = " << (value &= 0x0F) << endl;

//     return 0;
// }



// LISTING 5.10 Using sizeof to Determine the Number of Bytes Occupited by an 
// Array of 100 Integers, and That by Each Element Therein

#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Use sizeof to determine memory used by arrays" << endl;
    int myNumbers [100] = {0};

    cout << "Bytes used by an int: " << sizeof(int) << endl;
    cout << "Bytes used by myNumbers: " << sizeof(myNumbers) << endl;
    cout << "Bytes used by an element: " << sizeof(myNumbers[0]) << endl;

    return 0;
}