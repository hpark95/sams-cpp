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



// LISTING 6.6 Using the Conditional Operator (?:) to Find the Max of Two 
// Numbers

#include <iostream>
using namespace std;

int main() {
    cout << "Enter two nmbers" << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;

    int result = num1 > num2 ? num1 : num2;
    cout << "The greater of " << num1 << " and " << num2 << " is: " << result \
        << endl;

    return 0;
}

