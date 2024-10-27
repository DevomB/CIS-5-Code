#include <iostream>
using namespace std;

int getDivisor() {
    int divisor;
    cout << "Enter a divisor: ";
    cin >> divisor;
    return divisor;
}

int calcSquare(int num) {
    return num * num;
}

void findNumbers(int divisor) {
    cout << "Here are the numbers, from 0 to 100, that are" << endl;
    cout << "evenly divisible by " << divisor << ", and their squares:" << endl;
    for (int i = 0; i <= 100; ++i) {
        if (i % divisor == 0) {
            int square = calcSquare(i);
            cout << i << " " << square << endl;
        }
    }
}

int main() {
    int divisor = getDivisor();
    findNumbers(divisor);
    return 0;
}

