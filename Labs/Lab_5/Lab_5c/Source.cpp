#include <iostream>
#include <fstream> 
using namespace std;

int main() {
    double num1;
    double num2;
    double num3;

    cout << "Enter 3 values of double data type:" << endl;
    cout << "#1.) "; cin >> num1;
    cout << "#2.) "; cin >> num2;
    cout << "#3.) "; cin >> num3;

    ofstream outFile("C:\\numbers\\numbers.txt");

    if (!outFile) {
        cerr << "Error: File could not be opened." << endl;
        return 1; 
    }

    outFile << num1 << endl;
    outFile << num2 << endl;
    outFile << num3 << endl;

    outFile.close();

    cout << "The numbers have been written to a file." << endl;

    return 0;
}
