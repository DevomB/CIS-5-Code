#include <iostream>
#include <string>
#include "prototypes.h"

using namespace std;

int main() {
    int id;
    string name;
    double gpa;

    getRecord(id, name, gpa);
    displayRecord(id, name, gpa);

    return 0;
}

void getRecord(int& id, std::string& name, double& gpa) {
    cout << "Enter a student record:" << endl;
    cout << "ID: ";
    cin >> id;
    cin.ignore(); 

    cout << "NAME: ";
    getline(cin, name);
    cout << "GPA: ";
    cin >> gpa;
}

void displayRecord(const int& id, const std::string& name, const double& gpa) {
    system("CLS");

    cout << "STUDENT RECORD" << endl;
    cout << "ID: " << id << endl;
    cout << "NAME: " << name << endl;
    cout << "GPA: " << gpa << endl;
}