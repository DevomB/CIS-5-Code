#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    double floatArray[7] = {1.01, 2.02, 3.33, 4.044, 5.5, 6.06, 7.77};
    
    cout << "(A). The floatArray output using - cout <<\n\t";
    cout << "Cannot print array directly, it outputs the address: " << floatArray << "\n\n";

    cout << "(B). Output of the floatArray values - using a for loop\n\t";
    for (int i = 0; i < 7; i++) {
        cout << floatArray[i] << '\t';
    }
    cout << endl << endl;

    int intArray[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    cout << "(C). Output of the intArray values - using cout <<\n\t";
    cout << "Cannot print array directly, it outputs the address: " << intArray << "\n\n";

    cout << "(D). Output of the intArray values using a for loop\n\t";
    for (int i = 0; i < 8; i++) { 
        cout << intArray[i] << '\t';
    }
    cout << endl << endl;

    char cStringArray[8];
    strcpy(cStringArray, "Tom Lee");

    cout << "(E). Output of strcpy assignment to cStringArray - using cout << \n\t";
    for (int i = 0; i < 8; i++) { 
        cout << cStringArray[i];
    }
    cout << endl << endl;

    cout << "(F). Enter a 7-character name to be read by cin.getline(): ";
    cin.getline(cStringArray, 7);
    cout << "\n\tOutput after entering 7 letters - output by cout <<:\n\t";
    cout << cStringArray << endl;

    char yourName[8];
    strcpy(yourName, "Tom Lee");

    cout << "(G). What is output when using:\n\t"
         << "strcpy(yourName, \"Tom Lee\"); - and cout << yourName[2]: \n\t";
    cout << yourName[2] << endl; 

    char myName[8] = "Bob Lee";

    cout << "(H). What is output when using:\n\t"
         << "char myName [8] = \"Bob Lee\"; - and cout << myName[2]: \n\t";
    cout << myName[2] << endl; 

    return 0;
}