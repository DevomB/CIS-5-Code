#include <iostream>
#include <fstream>  // For file handling
using namespace std;

int main() {
    ifstream infile;

    infile.open("c:\\values\\numbers.txt");

    if (!infile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    int number;
    int sum = 0;

    while (!infile.eof()) {
        infile >> number;
        if (infile) {  
            sum += number;
            cout << number << endl; 
        }
    }

    infile.close();

    cout << "The total sum is: " << sum << endl;

    return 0;
}
