#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Product {
    int width;
    int height;
    string strOut;

public:
    Product(int w, int h): width(w), height(h) {}

    operator const char*() {
        stringstream str;
        str << "Dimension of the product = " << width << " x " << height;
        strOut = str.str();
        return strOut.c_str();
    }
};

int ProcessUserInput() {
    cout << "Enter a number corresponding to the following options." << endl;
    cout << "Option 1: Register a Product" << endl;
    cout << "Option 2: Print All Products" << endl;
    cout << "Option 3: Print a Product" << endl;
    cout << "Option 4: Quit" << endl;
    
    int option;
    cin >> option;

    return option;
}

void RegisterProduct(vector<Product>& vec) {
    cout << "Registering #" << vec.size() + 1 << " product." << endl;

    cout << "Enter width: " << endl;
    int productWidth;
    cin >> productWidth;

    cout << "Enter height: " << endl;
    int productHeight;
    cin >> productHeight;

    vec.push_back(Product(productWidth, productHeight));
}

void PrintAllProducts(vector<Product>& vec) {
    cout << "Printing all products." << endl;

    for(size_t i = 0; i < vec.size(); ++i)
        cout << "Product [" << i << "] = " << vec[i] << endl;
}

void PrintProduct(vector<Product>& vec) {
    cout << "Enter an index: " << endl;
    int index;
    cin >> index;

    if (index < vec.size())
        cout << "Product [" << index << "] = " << vec[index] << endl;
    else
        cout << "Index out of bound." << endl;
}

int main() {
    vector<Product> products;
    
    int userInput = 0;

    while (userInput != 4) {
        userInput = ProcessUserInput();

        switch(userInput) {
            case 1:
                RegisterProduct(products);
                break;
            case 2:
                PrintAllProducts(products);
                break;
            case 3:
                PrintProduct(products);
                break;
            case 4:
                break;
            default:
                cout << "Invalid Input. Please try again." << endl;
                break;
        }
        cout << endl;
    }

    return 0;
}