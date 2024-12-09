#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    Student();
    Student(int idNum, const string& studentName);
    void setId(int idNum);
    void setName(const string& studentName);
    int getId() const;
    string getName() const;
    void displayStudent() const;
};

#endif
