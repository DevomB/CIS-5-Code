#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number you entered is a positive number." << endl;
    } else if (number == 0) {
        cout << "The number you entered is a zero." << endl;
    } else {
        cout << "The number you entered is a negative number." << endl;
    }

    return 0;
}
