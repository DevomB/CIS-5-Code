#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int num1;
    int num2;
    int num3;

    cout << "Enter 3 values:" << endl;
    cin >> num1 >> num2 >> num3;

    ofstream outFile("C:\\data.txt", ios::out);

    if (!outFile) {
        cerr << "File could not be opened." << endl;
        return 1;
    }

    outFile << num1 << endl;
    outFile << num2 << endl;
    outFile << num3 << endl;

    outFile.close();
    cout << "The data has been written to file." << endl;

    return 0;
}
