#include <iostream>
using namespace std;

void getAges(int ages[]);
char getChoice();
void displayInOrder(const int ages[]);
void displayInReverse(const int ages[]);

int main() {
    char runAgain;
    do {
        int ages[5];  
        getAges(ages);  
        char choice = getChoice();  
        if (choice == 'O' || choice == 'o') {
            displayInOrder(ages);
        } else if (choice == 'R' || choice == 'r') {
            displayInReverse(ages);
        } else {
            cout << "Invalid entry - Must be O or R!" << endl;
        }
        cout << "Run program again (y / n)? ";
        cin >> runAgain;
        if (runAgain == 'y' || runAgain == 'Y') {
            system("cls");
        }
    } while (runAgain == 'y' || runAgain == 'Y');
    
    return 0;
}

void getAges(int ages[]) {
    cout << "Enter 5 ages: " << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
}

char getChoice() {
    char choice;
    cout << "How do you want to see the ages displayed?" << endl;
    cout << "Enter O for In Order, or R for In Reverse: ";
    cin >> choice;
    return choice;
}

void displayInOrder(const int ages[]) {
    cout << "Here are the ages in order:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << ages[i] << " ";
    }
    cout << endl;
}

void displayInReverse(const int ages[]) {
    cout << "Here are the ages in reverse order:" << endl;
    for (int i = 4; i >= 0; --i) {
        cout << ages[i] << " ";
    }
    cout << endl;
}
