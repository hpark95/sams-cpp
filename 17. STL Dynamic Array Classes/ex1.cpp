#include <iostream>
#include <vector>
using namespace std;

void StoreInVec(vector<int>& vec) {
    int input;
    cout << "Enter an integer to store: ";
    cin >> input;

    vec.push_back(input);
}

void DisplayVec(const vector<int>& vec) {
    cout << "Displaying the vector: ";

    for(auto elem: vec)
        cout << elem << " ";
    
    cout << endl;
}

void QueryElement(const vector<int>& vec) {
    int index;
    cout << "Enter an index: ";
    cin >> index;

    if (index < vec.size())
        cout << "Element [" << index << "] = " << vec[index] << endl; 
    else
        cout << "Index out of bound." << endl;
}

int main() {
    vector<int> vec;
    StoreInVec(vec);

    char userInput = '\0';

    while(userInput != 'e') {
        cout << "Do you want to continue?";
        cout << "Enter \'e\' to exit, \'i\' to insert, "
            "\'s\' to see the array, and \'q\' to query an element." << endl;
        cin >> userInput;

        switch (userInput) {
            case 'e':
                break;

            case 'i':
                StoreInVec(vec);
                break;

            case 's':
                DisplayVec(vec);
                break;

            case 'q':
                QueryElement(vec);
                break;

            default:
                cout << "Please check your input. Valid input is \'e\', \'i\',"
                    " and \'s\'." << endl;
                break;
        }

        cout << endl;
    }
    return 0;
}