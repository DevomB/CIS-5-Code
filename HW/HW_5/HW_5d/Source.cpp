#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    int a;
    int b;
    int c;
    cout << "Enter 3 values: " << endl;
    cin >> a >> b >> c;

    ofstream file("C:\\data.txt");
    if (!file.is_open()) {
        cerr << "Error: Could not open the file.\n";
        return 1;
    }
    
    file << a << "\n" << b << "\n" << c << "\n";
    file.close();

    cout << "The data has been written to file." << endl;
    
    return 0;
}
