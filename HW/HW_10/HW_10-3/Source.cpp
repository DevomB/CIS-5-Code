#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    char firstName[20], lastName[20], fullName[40];
    string friendsName;

    cout << "Enter your first name: ";
    cin.getline(firstName, 20);

    cout << "Enter your last name: ";
    cin.getline(lastName, 20);

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    cout << "How is your love life " << fullName << "?" << endl;
    cout << "By the way, your full name has " << strlen(fullName) << " characters." << endl;

    cout << "Enter your friend's full name: ";
    getline(cin, friendsName);

    cout << "How is " << friendsName << " love life " << fullName << "?" << endl;
    cout << "By the way, your friend's full name has " << friendsName.length() << " characters." << endl;

    return 0;
}
