#include <iostream>
#include "Student.h"
using namespace std;

int main() {
    Student s1; 
    Student s2(12345, "Tom Lee"); 

    cout << "Here is student #1:" << endl;
    s1.displayStudent();
    cout << endl;

    cout << "Here is student #2:" << endl;
    s2.displayStudent();
    cout << endl;

    s1.setId(33333);
    s1.setName("Bruce Lee");

    cout << "After updating s1:" << endl;
    
    cout << "Here is student #1:" << endl;
    s1.displayStudent();
    cout << endl;

    cout << "Here is student #2:" << endl;
    s2.displayStudent();
    cout << endl;

    cout << "Student #2's ID is " << s2.getId() << "." << endl;

    cout << "Student #1's name is " << s1.getName() << "." << endl;

    return 0;
}
