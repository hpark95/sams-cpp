#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int m, int d, int y): day(d), month(m), year(y) {}

    void DisplayDate() {
        cout << month << " / " << day << " / " << year << endl;
    }
    explicit operator int() {
        return day + month * 30 + year * 365;
    }
};

int main() {
    Date dateOne(2, 14, 2020);
    Date dateTwo(4, 30, 2020);

    cout << "dateOne is: ";
    dateOne.DisplayDate();
    cout << "unique integer representing dateOne is: " << int(dateOne) << endl;

    cout << "dateTwo is: ";
    dateTwo.DisplayDate();
    cout << "unique integer representing dateTwo is: " << int(dateTwo) << endl;

    return 0;
}