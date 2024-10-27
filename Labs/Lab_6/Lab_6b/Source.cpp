#include <iostream>
using namespace std;

float getBalance() {
    float balance;

    cout << "Enter your bank balance: ";
    cin >> balance;

    return balance;
}

float getDeposit() {
    float deposit;

    cout << "Enter the deposit amount: ";
    cin >> deposit;

    return deposit;
}

float calcNewBalance(float balance, float deposit) {
    return balance + deposit;
}

void displayBalance(float newBalance) {
    cout << "Your new balance is $" << newBalance << "." << endl;
}

int main() {
    float balance = getBalance();
    float deposit = getDeposit();
    float newBalance = calcNewBalance(balance, deposit);
    displayBalance(newBalance);
    return 0;
}