#include <iostream>
using namespace std;

void getDimensions(double &width, double &length, double &depth);
bool areValid(double width, double length, double depth);
double calcVolume(double width, double length, double depth);
void displayVolume(double volume);

int main() {
    double width;
    double length;
    double depth;
    getDimensions(width, length, depth);

    if (areValid(width, length, depth)) {
        double volume = calcVolume(width, length, depth);
        displayVolume(volume);
    } else {
        cout << "Invalid dimensions entered." << endl;
    }

    return 0;
}

void getDimensions(double &width, double &length, double &depth) {
    cout << "Width: ";
    cin >> width;
    cout << "Length: ";
    cin >> length;
    cout << "Depth: ";
    cin >> depth;
}

bool areValid(double width, double length, double depth) {
    return (width > 5 && width < 20) &&
           (length > 5 && length < 100) &&
           (depth > 1 && depth < 12);
}

double calcVolume(double width, double length, double depth) {
    return width * length * depth;
}

void displayVolume(double volume) {
    cout << "The volume is " << volume << " cubic feet." << endl;
}
