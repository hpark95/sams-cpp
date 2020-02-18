#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int countCharacters(const string& inputStr, const char& c) {
    size_t charPos = inputStr.find(c, 0);
    int occurrence = 0;

    while (charPos != string::npos) {
        ++occurrence;
        charPos = inputStr.find(c, charPos+1);
    }

    return occurrence;
}

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    
    int numVowels = 0;
    numVowels += countCharacters(str, 'a');
    numVowels += countCharacters(str, 'e');
    numVowels += countCharacters(str, 'i');
    numVowels += countCharacters(str, 'o');
    numVowels += countCharacters(str, 'u');
    
    cout << "\"" << str << "\"" << " contains " << numVowels << " vowels." \
        << endl;

    return 0;
}