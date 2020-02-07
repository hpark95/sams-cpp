// // LISTING 4.1 Declaring an Array of Integers and Accessing Its Elements

// #include <iostream>

// using namespace std;

// int main() {
//     int myNumbers [5] = {34, 56, -21, 5002, 365};

//     cout << "First element at index 0: " << myNumbers[0] << endl;
//     cout << "Second element at index 0: " << myNumbers[1] << endl;
//     cout << "Third element at index 0: " << myNumbers[2] << endl;
//     cout << "Fourth element at index 0: " << myNumbers[3] << endl;
//     cout << "Fifth element at index 0: " << myNumbers[4] << endl;

//     return 0;
// }



// // LISTING 4.2 Assigning Values to Elements in an Array

// #include <iostream>
// using namespace std;
// constexpr int Square(int number) {return number*number;}

// int main() {
//     const int ARRAY_LENGTH = 5;

//     // Array of 5 integers, initialized using a const
//     int myNumbers [ARRAY_LENGTH] = {5, 10, 0, -101, 20};

//     // Using a constexpr for array of 25 integers
//     int moreNumbers [Square(ARRAY_LENGTH)];

//     cout << "Enter index of the element to be changed: ";
//     int elementIndex = 0;
//     cin >> elementIndex;

//     cout << "Enter new value: ";
//     int newValue = 0;
//     cin >> newValue;

//     myNumbers[elementIndex] = newValue;
//     moreNumbers[elementIndex] = newValue;

//     cout << "Element " << elementIndex << " in array myNumbers is: ";
//     cout << myNumbers[elementIndex] << endl;

//     cout << "Element " << elementIndex << " in array moreNumbers is: ";
//     cout << moreNumbers[elementIndex] << endl;

//     return 0;
// }



// // LISTING 4.3 Accessing Elements in a Multidimensional Array

// #include <iostream>
// using namespace std;

// int main() {
//     int threeRowsColumns [3][3] = \
//     {{-501, 205, 2016}, {989, 101, 206}, {303, 456, 596}};

//     cout << "Row 0: " << threeRowsColumns[0][0] << " " \
//         << threeRowsColumns[0][1] <<  " " \
//         << threeRowsColumns[0][2] << endl;

//     cout << "Row 1: " << threeRowsColumns[1][0] << " " \
//         << threeRowsColumns[1][1] <<  " " \
//         << threeRowsColumns[1][2] << endl;

//     cout << "Row 2: " << threeRowsColumns[2][0] << " " \
//         << threeRowsColumns[2][1] <<  " " \
//         << threeRowsColumns[2][2] << endl;

//     return 0;
// }



// // LISTING 4.4 Creating a Dynamic Array of Integers and Inserting Values Dynamically

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> dynArray (3) ; // dynamic array of int

//     dynArray[0] = 365;
//     dynArray[1] = -421;
//     dynArray[2] = 789;

//     cout << "Number of integers in array: " << dynArray.size() << endl;

//     cout << "Enter another element to insert" << endl;
//     int newValue = 0;
//     cin >> newValue;
//     dynArray.push_back(newValue);

//     cout << "Number of integers in array: " << dynArray.size() << endl;
//     cout << "Last element in array: " << dynArray[dynArray.size()-1] << endl;

//     return 0;
// }



// // LISTING 4.5 Analyzing the Null-Terminator in a C-style String

// #include <iostream>
// using namespace std;

// int main() {
//     char sayHello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
//     cout << sayHello << endl;
//     cout << "Size of array: " << sizeof(sayHello) << endl;

//     cout << "Replacing space with null";
//     sayHello[5] = '\0';
//     cout << sayHello << endl;
//     cout << "Size of array: " << sizeof(sayHello) << endl;

//     return 0;
// }



// LISTING 4.6 A Risky Application Using C-style Strings and User Input

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main() {
//     cout << "Enter a word NOt longer than 20 characters: " << endl;
    
//     char userInput[21] = {'\0'};
//     cin >> userInput;

//     cout << "Length of your input was: " << strlen(userInput) << endl;

//     return 0;
// }



// LISTING 4.7 Using std::string to Initialize, Store User Input, Copy, Concatenate, and Determine the Length of a 
// string

#include <iostream>
#include <string>

using namespace std;

int main() {
    string greetString = "Hello std:string!";
    cout << greetString << endl;

    cout << "Enter a line of text: " << endl;
    string firstLine;
    getline(cin, firstLine);

    cout << "Enter another: " << endl;
    string secondLine;
    getline(cin, secondLine);

    cout << "Result of concatenation: " << endl;
    string concatString = firstLine + " " + secondLine;
    cout << concatString << endl;

    cout << "Copy of concatenated string: " << endl;
    string aCopy;
    aCopy = concatString;
    cout << aCopy << endl;

    cout << "Length of concat string: " << concatString.length() << endl;

    return 0;
}