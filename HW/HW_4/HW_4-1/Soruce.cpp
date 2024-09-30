#include <iostream>
using namespace std;

int main() {
    char inputChar;

    cout << "Enter a keyboard character and press Enter: ";
    cin >> inputChar;

    if ((inputChar >= 'a' && inputChar <= 'z') || (inputChar >= 'A' && inputChar <= 'Z')) {
        cout << "The character is an alphabetic character." << endl;
    } else {
        cout << "The character is not an alphabetic character." << endl;
    }
}