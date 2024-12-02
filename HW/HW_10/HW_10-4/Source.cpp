#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> values;

    values.push_back(1);
    values.push_back(2);
    values.push_back(4);
    values.push_back(9);
    values.push_back(5);

    cout << "Vector: ";
    for (int val : values) {
        cout << val << " ";
    }
    cout << endl;

    values.insert(values.begin(), 3);

    cout << "Vector: ";
    for (int val : values) {
        cout << val << " ";
    }
    cout << endl;

    values.erase(values.begin());

    cout << "Vector: ";
    for (int val : values) {
        cout << val << " ";
    }
    cout << endl;

    values.pop_back();

    cout << "Vector: ";
    for (int val : values) {
        cout << val << " ";
    }
    cout << endl;

    cout << "There are " << values.size() << " values." << endl;

    return 0;
}