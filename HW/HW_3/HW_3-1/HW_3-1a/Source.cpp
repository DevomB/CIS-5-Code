// Included: HW_3-1a
// ===================================================
// Program: HW_3-1a
// ===================================================
// Programmer: Devom Brahmbhatt
// Class: CIS 5
// ===================================================

#include <iostream>
#include <iomanip>
using namespace std;

const float TAX_RATE = 0.07;

int main() {
    float januarySales, februarySales, marchSales;

    cout << "Enter January sales: ";
    cin >> januarySales;

    cout << "Enter February sales: ";
    cin >> februarySales;

    cout << "Enter March sales: ";
    cin >> marchSales;

    float totalSales = januarySales + februarySales + marchSales;
    float taxAmount = totalSales * TAX_RATE;

    cout << fixed << setprecision(2);
    cout << "\nTotal sales for the first three months is $" << totalSales << ",\n";
    cout << "and the amount of sales tax is $" << taxAmount << endl;

    return 0;
}

// ===================================================
/* OUTPUT:
Enter January sales: 1101.55
Enter February sales: 2321.22
Enter March sales: 3313.12

Total sales for the first three months is $6735.89,
and the amount of sales tax is $471.51
*/
// ===================================================
