#include <cmath>
#include <iostream>
using namespace std;

double getSide(char sideName) {
    cout << "Side " << sideName << ":" << endl;
    cout << "Please enter the dimension: ";

    double side;
    cin >> side;
    
    return side;
}

double calcSideC(double sideA, double sideB){
    double sideAsqr = pow(sideA, 2);
    double sideBsqr = pow(sideB, 2);

    double resultsq = sideAsqr + sideBsqr;
    double result = sqrt(resultsq);

    return result;
}

void displaySideC(double sideC) {
    cout << "The dimension of Side C is: " << sideC << endl;
}

int main() {
    cout << "Enter two sides of a right triangle." << endl;

    double sideA = getSide('A');
    double sideB = getSide('B');

    double sideC = calcSideC(sideA, sideB);

    displaySideC(sideC);

    return 0;
}

