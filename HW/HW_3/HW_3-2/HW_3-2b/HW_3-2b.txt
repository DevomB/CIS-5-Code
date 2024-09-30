// Included: HW_3-2b
// ===================================================
// Program: HW_3-2b
// ===================================================
// Programmer: Devom Brahmbhatt
// Class: CIS 5
// ===================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string firstName;
    string lastName;

    cout << "Please enter your age and press Enter: ";
    cin >> age;

    cout << "Please enter your first and last name and press Enter: ";
    cin >> firstName >> lastName;

    cout << "Your name is " << firstName << " " << lastName << ", and you are " << age << " years old." << endl;

    return 0;
}

// ===================================================
/* OUTPUT:
Please enter your age and press Enter: 39
Please enter your first and last name and press Enter: Tom Lee
Your name is Tom Lee, and you are 39 years old.
Press any key to continue.
*/
// ===================================================
    