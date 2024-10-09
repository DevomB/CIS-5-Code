#include <iostream>
using namespace std;

int main() {
    char ch;
    int digitCount = 0;

    cout << "Enter your password: ";

    ch = cin.get();

    cout << "Here are the digits in the password:" << endl;

    while (ch != '\n') {
        switch(ch) {
            case '0': case '1': case '2': case '3': case '4': 
            case '5': case '6': case '7': case '8': case '9':
                cout << ch << " ";   
                digitCount++;       
                break;
        }
        ch = cin.get();
    }

    cout << endl << "There are " << digitCount << " digits in the password." << endl;
    
    return 0;
}
