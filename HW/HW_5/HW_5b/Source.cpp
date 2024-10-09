#include <iostream>
using namespace std;

int main() {
    char choice;
    char letter;
    int count = 0;

    cout << "Do you wish to see (U)ppercase or (L)owercase letters? ";
    cin >> choice;

    if (choice == 'U' || choice == 'u') {
        letter = 'A';
        while (letter <= 'Z') {
            cout << letter << '\t';
            letter++;
            count++;

            if (count % 18 == 0) {  // Print 5 letters per row
                cout << endl << "\t";
            }
        }
    }
    else if (choice == 'L' || choice == 'l') {
        letter = 'a';
        count = 0;
        while (letter <= 'z') {
            cout << letter << '\t';
            letter++;
            count++;
        }
    }
    else {
        cout << "The entry is incorrect.";
    }

    return 0;
}
