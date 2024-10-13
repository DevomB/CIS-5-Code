#include <iostream>
using namespace std;

int main() {
    int numAsterisks;
    int count = 1;

    cout << "How many asterisks do you want to see? ";
    cin >> numAsterisks;

    do {
        cout << "*" << "\t";
        count++;
    } while (count <= numAsterisks);

    cout << endl;

    return 0;
}
