// Included: Ch_3b_Lab
// ===================================================
// Program: Ch_3b_Lab
// ===================================================
// Programmer: Devom Brahmbhatt
// Class: CIS 5
// ===================================================

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double num1;
    double num2; 
    double num3;
    double result;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Calculate square root of first number
    result = sqrt(num1);
    cout << fixed << setprecision(2);
    cout << "The square root of the first number is " << result << endl;

    // Calculate first number raised to the power of 3
    result = pow(num1, 3);
    cout << num1 << " raised to a power of 3 is " << result << endl;

    // Calculate absolute value of first number
    result = fabs(num1);
    cout << "The absolute value of " << num1 << " is " << result << endl;

    // Calculate the average of the three numbers
    result = (num1 + num2 + num3) / 3;
    cout << "The average equals " << result << endl;

    return 0;
}

// ===================================================
/* OUTPUT:
Enter the first number: 7
Enter the second number: 12
Enter the third number: 29
The square root of the first number is 2.65
7.00 raised to a power of 3 is 343.00
The absolute value of 7.00 is 7.00
The average equals 16.00
*/
// ===================================================
