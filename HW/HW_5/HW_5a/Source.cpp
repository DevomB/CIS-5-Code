#include <iostream>
using namespace std;

int main() {
    int reminders;
    int count = 1;

    cout << "How many times do you need to be reminded? ";
    cin >> reminders;

    while (count <= reminders) {
        cout << "#" << count << ": Do your homework!" << endl;
        count++;
    }

    return 0;
}
