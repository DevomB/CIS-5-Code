#include <iostream>

using namespace std;

int main() {
    char choice;
    cout << "Do you want to see the alphabet in (U)ppercase or (l)owercase? ";
    cin >> choice;

    if (choice == 'U' || choice == 'u') {
        char letter = 'A';
        cout << "Uppercase Alphabet:" << endl;
        do {
            cout << letter;
            cout << "\t";
            letter++;
        } while (letter <= 'Z');
        cout << endl;
    } 
    else if (choice == 'L' || choice == 'l') {
        char letter = 'a';
        cout << "Lowercase Alphabet:" << endl;
        do {
            cout << letter;
            cout << '\t';
            letter++;
        } while (letter <= 'z');
        cout << endl;
    } 
    else {
        cout << "The entry is incorrect." << endl;
    }

    return 0;
}