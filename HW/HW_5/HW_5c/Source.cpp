#include <iostream>
using namespace std;

int main() {
    int numAsterisks;

    cout << "How many asterisks do you want to see? ";
    cin >> numAsterisks;
    int count = 1;

    do {
        cout << "*" << "\t";
        count++;
    } while (count <= numAsterisks);

    cout << endl;

    return 0;
}
