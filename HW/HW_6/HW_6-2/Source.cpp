#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float getNumber();
void showMenu();
char getChoice();
void showResult(float num, char choice);

int main() {
    float num = getNumber();
    showMenu();
    char choice = getChoice();
    showResult(num, choice);
    return 0;
}

float getNumber() {
    float num;
    cout << "Enter a float value: ";
    cin >> num;
    return num;
}

void showMenu() {
    cout << "A.) Calculate the square." << endl;
    cout << "B.) Calculate the square root." << endl;
}

char getChoice() {
    char choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

void showResult(float num, char choice) {
    if (choice == 'a' || choice == 'A') {
        cout << fixed << setprecision(2);
        cout << num << " squared equals " << num * num << ".\n";
    } else if (choice == 'b' || choice == 'B') { 
            cout << fixed << setprecision(2);
            cout << "The square root of " << num << " equals " << sqrt(num) << ".\n";
    } else {
        cout << "Invalid choice. Must be A or B. Now closing.\n";
    }
}