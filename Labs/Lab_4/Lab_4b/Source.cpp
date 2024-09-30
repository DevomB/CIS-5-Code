#include <iostream>
using namespace std;

int main() {
    char choice;

    // Display the menu of choices
    cout << "A. Well" << endl;
    cout << "B. Medium" << endl;
    cout << "C. Rare" << endl;
    cout << "D. Not at all. I'm a vegetarian!" << endl;

    // Prompt the user to make a choice
    cout << "How do you like your steak cooked (A,B,C,D)? ";
    cin >> choice;

    // Convert user input to uppercase to handle lowercase input
    choice = toupper(choice);

    // Use switch control structure to determine the output
    switch (choice) {
        case 'A':
            cout << "Great. Get rid of the blood." << endl;
            break;
        case 'B':
            cout << "Alright." << endl;
            break;
        case 'C':
            cout << "You probably want it still pulsing." << endl;
            break;
        case 'D':
            cout << "OK. So you're one of those people. Good choice." << endl;
            break;
        default:
            cout << "Invalid choice. Must be A, B, C, or D." << endl;
            break;
    }

    return 0;
}
