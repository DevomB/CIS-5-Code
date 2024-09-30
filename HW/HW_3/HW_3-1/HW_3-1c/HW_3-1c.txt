// Included: HW_3-1c
// ===================================================
// Program: HW_3-1c
// ===================================================
// Programmer: Devom Brahmbhatt
// Class: CIS 5
// ===================================================

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double baseValue;
    int exponentValue;

    cout << "Enter the base: ";
    cin >> baseValue;

    cout << "Enter the exponent: ";
    cin >> exponentValue;

    double powerResult = pow(baseValue, exponentValue);
    double squareRoot = sqrt(baseValue);

    cout << fixed << setprecision(2);
    cout << baseValue << " to the " << exponentValue << " power equals " << powerResult << "." << endl;
    cout << "The square root of " << baseValue << " equals " << squareRoot << "." << endl;

    return 0;
}

// ===================================================
/* OUTPUT:
Enter the base: 5
Enter the exponent: 3
5 to the 3 power equals 125.
The square root of 5 equals 2.24.
Press any key to continue
*/
// ===================================================