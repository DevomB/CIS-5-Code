#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    char ch;
    char runAgain;
    
    do {
        cout << "Please enter a keyboard character: ";
        cin >> ch;
        
        if (isalpha(ch)) {
            cout << "The character " << ch << " is an alphabetic character." << endl;
        } else {
            cout << "The character " << ch << " is not an alphabetic character." << endl;
        }
        
        cout << "Do you want to do it again? (Y/N): ";
        cin >> runAgain;
        
        if (runAgain == 'Y' || runAgain == 'y') {
            system("cls");
        }
        
    } while (runAgain == 'Y' || runAgain == 'y');
    

    return 0;
}
