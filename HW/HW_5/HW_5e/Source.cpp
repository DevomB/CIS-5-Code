#include <iostream>
#include <fstream>
using namespace std;

int main() {
    COmm inputFile("C:\\data.txt"); 

    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1; 
    }

    int number; 

    cout << "The values in the file are:" << endl;

    for (int i = 0; i < 6; i++) {
        inputFile >> number; 
        cout << number << endl;
    }

    inputFile.close();

    return 0;
}