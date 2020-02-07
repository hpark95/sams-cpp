// // LISTING 2.1 HelloWorldAnalysis.cpp: Analyze a Simple C++ Program

// // Preprocessor directive that includes header iostream
// #include <iostream>

// // Start of your program: function block main()
// int main() {
//     /* Write to the screen */
//     std::cout << "Hello World" << std::endl;

//     // Return a value to the os
//     return 0;
// }



// // LISTING 2.2 The using namespace Declaration

// // Preprocessor directive
// #include <iostream>

// // Start of your program
// int main() {
//     // Tell the compiler what namespace to search in
//     using namespace std;

//     /* Write to the screen */
//     cout << "Hello World" << endl;

//     // Return a value to the os
//     return 0;
// }



// // LISTING 2.3 Another Demonstration of the using Keyword

// // Preprocessor directive
// #include <iostream>

// // Start of your program
// int main() {
//     // Tell the compiler what namespace to search in
//     using std::cout;
//     using std::endl;

//     /* Write to the screen */
//     cout << "Hello World" << endl;

//     // Return a value to the os
//     return 0;
// }



// // LISTING 2.4 Declaring, Defining, and Calling a Function That Demonstrates Capabilities of std::cout

// #include <iostream>
// using namespace std;

// // Declare a function
// int DemoConsoleOutput();

// int main() {
//     // Call i.e. invoke the function
//     DemoConsoleOutput();

//     return 0;
// }

// // Define i.e. implement the previously declared function
// int DemoConsoleOutput() {
//     cout << "This is a simple string literal" << endl;
//     cout << "Writing number five: " << 5 << endl;
//     cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
//     cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
//     cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;

//     return 0;
// }



// // LISTING 2.5 Using the Return Value of a Function

// #include <iostream>
// using namespace std;

// // Declare a function
// int DemoConsoleOutput();

// int main() {
//     // Funcion call with return used to exit
//     return DemoConsoleOutput();
// }

// // Define i.e. implement the previously declared function
// int DemoConsoleOutput() {
//     cout << "This is a simple string literal" << endl;
//     cout << "Writing number five: " << 5 << endl;
//     cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
//     cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
//     cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;

//     return 0;
// }



// LISTING 2.6 Use cin and cout to Display Number and Text Input by User

# include <iostream>
# include <string>
using namespace std;

int main() {
    // Delcar a variable to store an integer
    int inputNumber;

    cout << "Enter an integer: ";

    // Store integer given user input
    cin >> inputNumber;

    // The same with text i.e. string data
    cout << "Enter your name: ";
    string inputName;
    cin >> inputName;

    cout << inputName << " entered " << inputNumber << endl;

    return 0;
}