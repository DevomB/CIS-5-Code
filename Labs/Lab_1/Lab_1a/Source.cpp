// Included:  Lab_1a
// ===================================================
// Program: Lab_1a
// ===================================================
// Programmer: Devom Brahmbhatt         
// Class: CIS 5
// ===================================================


#include <iostream>

int main() {
    double checkingBalance, savingsBalance, depositAmount, checkAmount;

    std::cout << "Enter your present checking account balance: ";
    std::cin >> checkingBalance;

    std::cout << "Enter your present savings account balance: ";
    std::cin >> savingsBalance;

    std::cout << "Enter the amount to be deposited into your savings account: ";
    std::cin >> depositAmount;

    std::cout << "Enter the amount of the check you wish to write: ";
    std::cin >> checkAmount;

    savingsBalance += depositAmount;
    checkingBalance -= checkAmount;
    double totalBalance = checkingBalance + savingsBalance;

    std::cout << "\nAfter the deposit, the savings account balance is $" << savingsBalance << ".\n";
    std::cout << "After writing the check, the checking account balance is $" << checkingBalance << ".\n";
    std::cout << "After both transactions, the total of the two accounts is $" << totalBalance << ".\n";
    std::cout << "Well, you're not exactly rich, but not bad.\n";

    return 0;
}

// ===================================================
/* OUTPUT:
Enter your present checking account balance: 123123
Enter your present savings account balance: 131232
Enter the amount to be deposited into your savings account: 123123
Enter the amount of the check you wish to write: 123123

After the deposit, the savings account balance is $254355.
After writing the check, the checking account balance is $0.
After both transactions, the total of the two accounts is $254355.
Well, you're not exactly rich, but not bad
*/
// ===================================================