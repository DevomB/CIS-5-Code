#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int SIZE = 5;

void getValues(double numbers[]);
void showMenu();
char getChoice();
void doTheMath(const double numbers[], char choice);

int main() {
    double numbers[SIZE];

    getValues(numbers);
    system("cls");
    showMenu();

    char choice = getChoice();
    system("cls");

    doTheMath(numbers, choice);

    return 0;
}

void getValues(double numbers[]) {
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }
}

void showMenu() {
    cout << "\nA. Display the Square Root of each number.\n";
    cout << "B. Display the Sum of all numbers.\n";
    cout << "C. Display the Average of all numbers.\n";
    cout << "Enter your choice: ";
}

char getChoice() {
    char choice;
    cin >> choice;
    return toupper(choice);
}

void doTheMath(const double numbers[], char choice) {
    switch (choice) {
        case 'A':
            cout << "The square roots are:\n";
            for (int i = 0; i < SIZE; i++) {
                cout << setw(10) << fixed << setprecision(3) << sqrt(numbers[i]) << endl;
            }
            break;
        case 'B': {
            double sum = 0;
            for (int i = 0; i < SIZE; i++) {
                sum += numbers[i];
            }
            cout << "The sum is " << fixed << setprecision(2) << sum << ".\n";
            break;
        }
        case 'C': {
            double sum = 0;
            for (int i = 0; i < SIZE; i++) {
                sum += numbers[i];
            }
            double average = sum / SIZE;
            cout << "The average is " << fixed << setprecision(2) << average << ".\n";
            break;
        }
        default:
            cout << "Invalid choice. Please enter A, B, or C.\n";
            break;
    }
}
