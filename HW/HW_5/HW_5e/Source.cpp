#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int number;

    ifstream inputFile("C:\\data.txt");

    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }



    cout << "The values in the file are:" << endl;

    for (int i = 0; i < 6; i++) {
        if (inputFile >> number) {
            cout << number << endl;
        } else {
            cerr << "Error reading data!" << endl;
            break;
        }
    }

    inputFile.close();

    return 0;
}
