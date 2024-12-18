#include <iostream>
using namespace std;

int main() {
    int choice;

    // Display the menu
    cout << "MENU" << endl;
    cout << "1. Lobster" << endl;
    cout << "2. Steak" << endl;
    cout << "3. Turkey" << endl;
    cout << "4. Hamburger" << endl;
    cout << "5. Vegetarian Sandwich" << endl;

    // Prompt the user to make a selection
    cout << "Choose your dinner entree: ";
    cin >> choice;

    // Use a switch statement to display the corresponding message
    switch (choice) {
        case 1:
            cout << "An excellent seafood choice." << endl;
            break;
        case 2:
            cout << "Top grade sirloin - the best!" << endl;
            break;
        case 3:
            cout << "A Thanksgiving feast." << endl;
            break;
        case 4:
            cout << "World's best burger." << endl;
            break;
        case 5:
            cout << "Oh, so you're one of those!" << endl;
            break;
        default:
            cout << "Invalid selection." << endl;
            break;
    }

    return 0;
}
