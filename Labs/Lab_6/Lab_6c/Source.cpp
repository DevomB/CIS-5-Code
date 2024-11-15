#include <iostream>
#include <iomanip>
using namespace std;

void getInfo(double &salary, double &sales, int &years);
double calcServiceBonus(int years);
double calcCommission(double sales);
double calcPay(double salary, double serviceBonus, double commission);
void displayPay(double salary, double serviceBonus, double commission, double totalPay);

int main() {
    double salary;
    double sales;
    double serviceBonus;
    double commission;
    double totalPay;
    int years;

    getInfo(salary, sales, years);

    serviceBonus = calcServiceBonus(years);

    commission = calcCommission(sales);

    totalPay = calcPay(salary, serviceBonus, commission);

    displayPay(salary, serviceBonus, commission, totalPay);

    return 0;
}

void getInfo(double &salary, double &sales, int &years) {
    cout << "Enter your monthly salary: ";
    cin >> salary;
    cout << "Enter your sales for this month: ";
    cin >> sales;
    cout << "Enter the number of years employed: ";
    cin >> years;
}

double calcServiceBonus(int years) {
    if (years >= 5) {
        return years * 25.0;
    } else {
        return 0.0;
    }
}

double calcCommission(double sales) {
    if (sales >= 5000) {
        return sales * 0.06;
    } else {
        return 0.0;
    }
}

double calcPay(double salary, double serviceBonus, double commission) {
    return salary + serviceBonus + commission;
}

void displayPay(double salary, double serviceBonus, double commission, double totalPay) {
    cout << fixed << setprecision(2);
    cout << "Salary: $" << salary << endl;
    cout << "Service Bonus: $" << serviceBonus << endl;
    cout << "Commission: $" << commission << endl;
    cout << "-----------------------" << endl;
    cout << "Total Pay: $" << totalPay << endl;
}