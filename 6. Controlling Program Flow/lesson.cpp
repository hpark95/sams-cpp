// // LISTING 6.1 Multiplying or Adding Two Integers on the Basics of User Input

// #include <iostream>

// using namespace std;

// int main() {
//     cout << "Enter two integers:" << endl;
//     int num1 = 0, num2 = 0;
//     cin >> num1;
//     cin >> num2;

//     cout << "Enter \'m\' to multiply, anything else to add: ";
//     char userSelection = '\0';
//     cin >> userSelection;

//     int result = 0;
//     if (userSelection == 'm')
//         result = num1 * num2;
//     else
//         result = num1 + num2;
    
//     cout << "result is: " << result << endl;

//     return 0;
// }



// // LISTING 6.2 Check for Bounds Before Copying a String into a char Array

// #include <iostream>
// #include <string>
// #include <string.h>

// using namespace std;

// int main() {
//     cout << "Enter a line of text: " << endl;
//     string userSelection;
//     getline(cin, userSelection);

//     char copyInput[20] = {'\0'};
//     if (userSelection.length() < 20) {
//         strcpy(copyInput, userSelection.c_str());
//         cout << "copyInput contains: " << copyInput << endl;
//     }
//     else {
//         cout << "Bounds exceeded: won't copy!" << endl;
//     }

//     return 0;
// }



// // LISTING 6.3 Using Nested if Statements in Multiplying or Dividng a Number

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Enter two numbers:" << endl;
//     float num1 = 0, num2 = 0;
//     cin >> num1;
//     cin >> num2;

//     cout << "Enter 'd' to divide, anything else to multiply: ";
//     char userSelection = '\0';
//     cin >> userSelection;

//     float result = 0;
//     if (userSelection == 'd') {
//        cout << "You wish to divide!" << endl;
//         if (num2 == 0) {
//            cout << "Division by zero is not allowed" << endl;
//         }
//         else {
//            result = num1 / num2;
//            cout << num1 << " / " << num2 << " = " << result << endl;
//         }
//     } else {
//         cout << "You wish to multiply!" << endl;
//         result = num1 * num2;
//         cout << num1 << " x " << num2 << " = " << result << endl;
//     }

//     return 0;
// }



// // LISTING 6.4 Using a Grouped if...else Construct

// #include <iostream>
// using namespace std;

// int main() {
//     enum DaysOfWeek {
//         Sunday = 0,
//         Monday,
//         Tuesday,
//         Wednesday,
//         Thursday,
//         Friday,
//         Saturday
//     };
    
//     cout << "Find what days of the week are named after!" << endl;
//     cout << "Enter a number for a day (Sunday = 0): ";

//     short input = 0;
//     cin >> input;

//     if (input == Sunday) {
//         cout << "Sunday was named after Sun" << endl;
//     }
//     else if (input == Monday) {
//         cout << "Monday was named after Moon" << endl;
//     }
//     else if (input == Tuesday) {
//         cout << "Tuesday was named after Mars" << endl;
//     }
//     else if (input == Wednesday) {
//         cout << "Wednesday was named after Mercury" << endl;
//     }
//     else if (input == Thursday) {
//         cout << "Thursday was named after Jupiter" << endl;
//     }
//     else if (input == Friday) {
//         cout << "Friday was named after Venus" << endl;
//     }
//     else if (input == Saturday) {
//         cout << "Saturday was named after Saturn" << endl;
//     }
//     else {
//         cout << "Wrong input, execute again" << endl;
//     }

//     return 0;
// }



// // LISTING 6.5 Tell What Days of the Week are Named After Using switch-case, 
// // break, and default

// #include <iostream>
// using namespace std;

// int main() {
//     enum DaysOfWeek {
//         Sunday = 0,
//         Monday,
//         Tuesday,
//         Wednesday,
//         Thursday,
//         Friday,
//         Saturday
//     };
    
//     cout << "Find what days of the week are named after!" << endl;
//     cout << "Enter a number for a day (Sunday = 0): ";

//     short input = 0;
//     cin >> input;

//     switch (input) {
//         case Sunday:
//             cout << "Sunday was named after Sun" << endl;
//             break;
//         case Monday:
//             cout << "Monday was named after Moon" << endl;
//             break;
//         case Tuesday:
//             cout << "Tuesday was named after Mars" << endl;
//             break;
//         case Wednesday:
//             cout << "Wednesday was named after Mercury" << endl;
//             break;
//         case Thursday:
//             cout << "Thursday was named after Jupiter" << endl;
//             break;
//         case Friday:
//             cout << "Friday was named after Venus" << endl;
//             break;
//         case Saturday:
//             cout << "Saturday was named after Saturn" << endl;
//             break;
//         default:
//             cout << "Wrong input, execute again" << endl;
//             break;
//     }

//     return 0;
// }



// // LISTING 6.6 Using the Conditional Operator (?:) to Find the Max of Two 
// // Numbers

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Enter two nmbers" << endl;
//     int num1 = 0, num2 = 0;
//     cin >> num1;
//     cin >> num2;

//     int result = num1 > num2 ? num1 : num2;
//     cout << "The greater of " << num1 << " and " << num2 << " is: " << result \
//         << endl;

//     return 0;
// }



// // LISTING 6.7 Asking the User Whether He Wants to Repeat Calculations Using 
// // goto

// #include <iostream>
// using namespace std;

// int main() {
// Start:
//     cout << "Enter two integers: " << endl;

//     int num1 = 0, num2 = 0;
//     cin >> num1;
//     cin >> num2;

//     cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
//     cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

//     cout << "Do you wish to perform another operation (y/n)?" << endl;
    
//     char userInput = '\0';
//     cin >> userInput;

//     if (userInput == 'y')
//         goto Start;

//     cout << "Goodbye!" << endl;
    
//     return 0;
    
// }



// // LISTING 6.8 Using a while Loop to Help the User Rerun Calculations

// #include <iostream>
// using namespace std;

// int main() {
//     char userInput = 'm'; // initial value
    
//     while (userInput != 'x') {
//         cout << "Enter the two integers: " << endl;

//         int num1 = 0, num2 = 0;
//         cin >> num1;
//         cin >> num2;

//         cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
//         cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

//         cout << "Press x to exit(x) or any other key to recalculate" << endl;
//         cin >> userInput;
//     }

//     cout << "Goodbye!" << endl;

//     return 0;
// }



// // LISTING 6.9 Using do...while to Repeat Execution of a Block of Code

// #include <iostream>
// using namespace std;

// int main() {
//     char userInput = 'x'; // initial value

//     do {
//         cout << "Enter the two integers: " << endl;

//         int num1 = 0, num2 =0;
//         cin >> num1;
//         cin >> num2;

//         cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
//         cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

//         cout << "Press x to exit(x) or any other key to recalculate" << endl;
//         cin >> userInput;
//     } while (userInput != 'x');

//     cout << "Goodbye!" << endl;
    
//     return 0;
// }



// // LISTING 6.10 Using for Loops to Enter Elements in a Static Array and 
// // Displaying it

// #include <iostream>
// using namespace std;

// int main() {
//     const int ARRAY_LENGTH = 5;
//     int myNums[ARRAY_LENGTH] = {0};

//     cout << "Populate array of 5 integers" << endl;

//     for (int counter = 0; counter < ARRAY_LENGTH; ++counter) {
//         cout << "Enter an integer for element " << counter << ": ";
//         cin >> myNums[counter];
//     }

//     cout << "Displaying contents of the array: " << endl;

//     for (int counter = 0; counter < ARRAY_LENGTH; ++counter) {
//         cout << "Element " << counter << " = " << myNums[counter] << endl;
//     }

//     return 0;
// }



// // LISTING 6.11 Using a for Loop, Omitting Loop Expression, to Repeat 
// // Calculations on User Request

// #include <iostream>
// using namespace std;

// int main() {
//     for(char userInput = 'm'; (userInput != 'x');) {
//         cout << "Enter the two integers: " << endl;
//         int num1 = 0, num2 = 0;
//         cin >> num1;
//         cin >> num2;

//         cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
//         cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

//         cout << "Press x to exit or any other key to recalculate" << endl;
//         cin >> userInput;
//     }

//     cout << "Goodbye!" << endl;

//     return 0;
// }



// // LISTING 6.12 Using Range-Based for Loop Over Arrays and a std::string

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int someNums[] = {1, 101, -1, 40, 2040};

//     for (const int& aNum : someNums) {
//         cout << aNum << " ";
//     }
//     cout << endl;

//     for (auto anElement: {5, 222, 110, -45, 2017}) {
//         cout << anElement << " ";
//     }
//     cout << endl;

//     char charArray[] = {'h', 'e', 'l', 'l', 'o'};
//     for (auto aChar: charArray) {
//         cout << aChar << " ";
//     }
//     cout << endl;

//     double moreNums[] = {3.14, -1.3, 22, 10101};
//     for (auto anElement: moreNums) {
//         cout << anElement << " ";
//     }
//     cout << endl;

//     string sayHello{"Hello World!"};
//     for (auto anElement: sayHello) {
//         cout << anElement << " ";
//     }
//     cout << endl;

//     return 0;
// }



// // LISTING 6.13 Using continue to Restart and break to Exit an Infinite for 
// // Loop

// #include <iostream>
// using namespace std;

// int main() {
//     for (;;) {
//         cout << "Enter two integers: " << endl;
//         int num1 = 0, num2 = 0;
//         cin >> num1;
//         cin >> num2;

//         cout << "Do you wish to correct the numbers? (y/n): ";
//         char changeNumbers = '\0';
//         cin >> changeNumbers;

//         if (changeNumbers == 'y')
//             continue;
        
//         cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
//         cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

//         cout << "Press x to exit or any other key to recalculate" << endl;
//         char userInput = '\0';
//         cin >> userInput;

//         if (userInput == 'x')
//             break;
//     }

//     cout << "Goodbye!" << endl;

//     return 0;
// }



// // LISTING 6.14 Using Nested Loops to Multiply Each Element in an Array by 
// // Each in Another

// #include <iostream>
// using namespace std;

// int main() {
//     const int ARRAY1_LEN = 3;
//     const int ARRAY2_LEN = 2;

//     int myNums1[ARRAY1_LEN] = {35, -3, 0};
//     int myNums2[ARRAY2_LEN] = {20, -1};

//     cout << "Multiplying each int in myNums1 by each in myNums2: " << endl;

//     for(int i = 0; (i < ARRAY1_LEN); ++i) {
//         for (int j = 0; (j < ARRAY2_LEN); ++j) {
//             cout << myNums1[i] << " x " << myNums2[j] << " = " << myNums1[i] \
//                 * myNums2[j] << endl;
//         }
//     }

//     return 0;
// }



// // LISTING 6.15 Using Nested Loops to Iterate Elements in a Two-dimensional 
// // Array of Integers

// #include <iostream>
// using namespace std;

// int main() {
//     const int NUM_ROWS = 3;
//     const int NUM_COLS = 4;

//     int arr[NUM_ROWS][NUM_COLS] = {{34, -1, 879, 22}, {24, 365, -101, -1}, \
//         {-20, 40, 90, 97}};

//     for(int i = 0; i < NUM_ROWS; ++i) {
//         for (int j = 0; j < NUM_COLS; ++j) {
//             cout << "Integer[" << i << "][" << j << "] = " << \
//                 arr[i][j] << endl;
//         }
//     }

//     return 0;
// }



// LISTING 6.16 Using Nested Loops to Calculate a Fibonacci Series

#include <iostream>
using namespace std;

int main() {
    const int numToCalculate = 5;
    cout << "This program will calculate " << numToCalculate << \
        "Fibonacci Numbers at a time" << endl;

    int num1 = 0, num2 = 1;
    char userInput = '\0';
    
    cout << num1 << " " << num2 << " ";

    do {
        for (int i = 0; i < numToCalculate; ++i) {
            int num2Temp = num2;
            num2 = num1 + num2;
            num1 = num2Temp;

            cout << num2 << " ";
        }

        cout << "\nDo you want more numbers (y/n)? ";
        cin >> userInput;

    } while (userInput == 'y');

    cout << "Goodbye!" << endl;

    return 0;
}