#include <iostream>
#include <string>
#include "prototypes.h"

using namespace std;


int main() {
    int width, height;
    char repeat;
    do {
        system("CLS");
        bool validData = false;
        while (validData == false) {
            validData = getData(width, height);
        }
        printBox(width, height);

        cout << "Do it again? (Y/N): ";
        cin >> repeat;
        repeat = toupper(repeat);
    } while (repeat == 'Y');

    return 0;
}

bool getData(int& width, int& height) {
    cout << "This program will draw a rectangular box in stars." << endl << endl
         << "The size of the box will be determined by the width and height" << endl 
         << "that you specify." << endl << endl
         << "Enter integer values, because the width represents the" << endl 
         << "number of columns, and the height represents the number of rows." << endl << endl
         << "The width should not exceed 79, because 80 is the " << endl
         << "maximum screen width. Both width and height must be " << endl
         << "at least 1." << endl << endl;


    cout << "Please enter a width: ";
    cin >> width;

    cout << "Please enter a height: ";
    cin >> height;

    cout << endl;

    return isDataValid(width, height);
}

bool isDataValid(int width, int height) {
    if (width < 1 || width > 79 || height < 1) {
        cout << "Incorrect data." << endl;
        return false;
    }
    return true;
}

void printBox(int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

