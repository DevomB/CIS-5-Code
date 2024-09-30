#include <iostream>
#include <string>

int main() {
    // Var inits
    std::string firstName, lastName;
    std::string friendLastName;
    char friendFirstInitial, friendMiddleInitial;

    // Prints and Inputs ( Grouped similarly )
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    std::cout << "Hi " << firstName << " " << lastName << ". What is the last name of your friend? ";
    std::cin >> friendLastName;
    std::cout << "What is his first initial? ";
    std::cin >> friendFirstInitial;
    std::cout << "Wait a minute, what is his middle initial? ";
    std::cin >> friendMiddleInitial;

    std::cout << "I cannot believe your friend is " << friendFirstInitial << ". " << friendMiddleInitial << ". " << friendLastName << ".\n";

    return 0;
}
