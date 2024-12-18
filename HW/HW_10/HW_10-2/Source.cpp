#include <iostream>
#include <cctype>

using namespace std;

char getCharacter();
void displayResults(char inputChar);

int main() {
    char userChar;
    char repeat;

    do {
        system("cls");

        userChar = getCharacter();

        displayResults(userChar);

        cout << "Do it again (Y/N)? ";
        cin >> repeat;

        repeat = toupper(repeat);

    } while (repeat == 'Y');

    return 0;
}

char getCharacter() {
    char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;
    return inputChar;
}

void displayResults(char inputChar) {
    if (isalnum(inputChar)) {
        cout << "Character is an alphanumeric character." << endl;
    }

    if (isdigit(inputChar)) {
        cout << "Character is a digit." << endl;
    }

    if (isalpha(inputChar)) {
        cout << "Character is an alphabetic character." << endl;

        if (islower(inputChar)) {
            cout << "The character is lowercase." << endl;
            cout << "It looks like this in uppercase: " << (char)toupper(inputChar) << endl;
        } else if (isupper(inputChar)) {
            cout << "The character is uppercase." << endl;
            cout << "It looks like this in lowercase: " << (char)tolower(inputChar) << endl;
        }
    }
}