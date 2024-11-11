#include <iostream>
using namespace std;

bool getData(int &width, int &height);
bool isDataValid(int width, int height);
void printBox(int width, int height);

int main() {
    int width, height;
    char repeat;
    do {
        system("cls");
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

bool getData(int &width, int &height) {
    cout << "This program will draw a rectangular box in stars.\n\n"
         << "The size of the box will be determined by the width and height\n"
         << "that you specify.\n\n"
         << "Enter integer values, because the width represents the\n"
         << "number of columns, and the height represents the number of rows.\n"
         << "\nThe width should not exceed 79, because 80 is the maximum screen\n"
         << "width. Both width and height must be at least 1.\n\n";

    cout << "Please enter a width: ";
    cin >> width;
    cout << "Please enter a height: ";
    cin >> height;
    cout << endl;

    return isDataValid(width, height);
}

bool isDataValid(int width, int height) {
    if (width < 1 || width > 79 || height < 1) {
        cout << "Incorrect data.\n\n";
        return false;
    }
    return true;
}

void printBox(int width, int height) {
    cout << "Here is the box:\n";
    for (int row = 0; row < height; ++row) {
        for (int col = 0; col < width; ++col) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
