#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void getLogin(string& id, string& pw);
bool validateLogin(const string& id, const string& pw);
void showResult(bool isValid);

int main() {
    string id;
    string pw;

    getLogin(id, pw);
    bool isValid = validateLogin(id, pw);
    showResult(isValid);

    return 0;
}

void getLogin(string& id, string& pw) {
    cout << "Enter your ID: ";
    getline(cin, id);
    cout << "Enter your PW: ";
    getline(cin, pw);
}

bool validateLogin(const string& id, const string& pw) {
    ifstream inFile("C:/login.txt");
    string fileId, filePw;

    if (inFile.is_open()) {
        getline(inFile, fileId);
        getline(inFile, filePw);
        inFile.close();

        return id == fileId && pw == filePw;
    } else {
        cout << "Error opening login file." << endl;
        return false;
    }
}

void showResult(bool isValid) {
    if (isValid) {
        cout << "Valid." << endl;
    } else {
        cout << "Invalid." << endl;
    }
}