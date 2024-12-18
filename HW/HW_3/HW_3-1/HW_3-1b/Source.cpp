// Included: HW_3-1b
// ===================================================
// Program: HW_3-1b
// ===================================================
// Programmer: Devom Brahmbhatt
// Class: CIS 5
// ===================================================

#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    int quotient = firstNumber / secondNumber;
    int remainder = firstNumber % secondNumber;

    cout << firstNumber << " divided by " << secondNumber 
        << " equals " << quotient << " with a remainder of " 
        << remainder << "." << endl;

    return 0;
}

// ===================================================
/* OUTPUT:
Enter the first number: 150
Enter the second number: 23
150 divided by 23 equals 6 with a remainder of 12.
*/
// ===================================================
