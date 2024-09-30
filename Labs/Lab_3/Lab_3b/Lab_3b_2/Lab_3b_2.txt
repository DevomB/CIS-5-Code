// ===================================================
// Program: Banking - Account Summary
// ===================================================
// Programmer: Devom Brahmbhatt         
// Class: CIS 5
// ===================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double INT_RATE = 0.05; // Annual interest rate of 5%
    double balance = 1000.00;     // Present balance
    double deposit = 0.00;        // Deposit amount
    double newBal = 0.00;         // New balance
    double interest = 0.00;       // Monthly interest

    cout << "Your present balance is " << fixed << setprecision(2) << balance << "." << endl;
    cout << "Enter the deposit amount: ";
    cin >> deposit;

    newBal = balance + deposit;
    interest = (newBal * INT_RATE) / 12;

    cout << "\n----- ACCOUNT SUMMARY -----" << endl;
    cout << left << setw(20) << "Previous Balance:" << right << setw(10) << "$ " << setw(10) << balance << endl;
    cout << left << setw(20) << "Deposit Amount:" << right << setw(10) << "$ " << setw(10) << deposit << endl;
    cout << left << setw(20) << "New Balance:" << right << setw(10) << "$ " << setw(10) << newBal << endl;
    cout << left << setw(20) << "Monthly Interest:" << right << setw(10) << "$ " << setw(10) << interest << endl;

    return 0;
}

// ===================================================
/* OUTPUT:
Your present balance is 1000.00.
Enter the deposit amount: 500

----- ACCOUNT SUMMARY -----
Previous Balance: $   1000.00
Deposit Amount:   $    500.00
New Balance:      $   1500.00
Monthly Interest: $      6.25
*/
// ===================================================
