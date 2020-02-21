#include <iostream>
#include <string>
#include <map>
using namespace std;

struct WordProperty {
    string word;
    bool isLatinBase;

    WordProperty(string inputWord, bool inputLatin): \
        word(inputWord), isLatinBase(inputLatin) {}
};

struct fPredicate {
    bool operator()(const WordProperty& item1, const WordProperty& item2) 
        const {
        return (item1.word > item2.word);
    }
};

template <typename T>
void DisplayMapWD(const T& container) {
    for(auto item: container) {
        cout << item.first.word << ": " << item.second << endl;
    }
    cout << endl;
}

int main() {
    map<WordProperty, string, fPredicate> mapWordDefinition;
    mapWordDefinition.insert(make_pair(WordProperty("abc", true), "abc"));
    mapWordDefinition[WordProperty("def", false)] = "def";
    
    DisplayMapWD(mapWordDefinition);

    return 0;
}