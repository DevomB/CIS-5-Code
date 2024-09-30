// Included: HW_3-2a
// ===================================================
// Program: HW_3-2a 
// ===================================================
// Programmer: Devom Brahmbhatt         
// Class: CIS 5
// ===================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    cout << "Enter five integers:" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << endl << "The five integers you entered are:" << endl;
    cout << setw(10) << num1 << endl;
    cout << setw(10) << num2 << endl;
    cout << setw(10) << num3 << endl;
    cout << setw(10) << num4 << endl;
    cout << setw(10) << num5 << endl;

    int total = num1 + num2 + num3 + num4 + num5;
    double average = total / 5.0;

    cout << endl << "The sum of the five numbers is " << total << "." << endl;
    cout << "The average of the five numbers is " << fixed << setprecision(2) << average << "." << endl;

    return 0;
}

// ===================================================
/* OUTPUT:
Enter five integers:
3
23
533
644
78906

The five integers you entered are:
         3
        23
       533
       644
     78906

The sum of the five numbers is 80109.
The average of the five numbers is 16021.80.
*/
// ===================================================
