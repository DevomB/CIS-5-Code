#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() : id(0), name("") {}

Student::Student(int idNum, const string& studentName) : id(idNum), name(studentName) {}

void Student::setId(int idNum) {
    id = idNum;
}

void Student::setName(const string& studentName) {
    name = studentName;
}

int Student::getId() const {
    return id;
}

string Student::getName() const {
    return name;
}

void Student::displayStudent() const {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
}
