#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int num3;

    cout << "Enter 3 values of int data type:" << endl;
    cout << "#1.) ";
    cin >> num1;
    cout << "#2.) ";
    cin >> num2;
    cout << "#3.) ";
    cin >> num3;

    int largest;
    int smallest;

    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }

    cout << "Of the three values you entered," << endl;
    cout << largest << " is the largest and " << smallest << " is the smallest." << endl;

    return 0;
}
