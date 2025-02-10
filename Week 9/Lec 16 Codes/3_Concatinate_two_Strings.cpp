#include <iostream>
#include <string>
using namespace std;

// Function declaration
string concatenateStrings(string str1, string str2);

int main() {
    string firstName = "John";
    string lastName = "Doe";
    string fullName = concatenateStrings(firstName, lastName);  // Function call and returning value
    cout << "Full Name: " << fullName << endl;
    return 0;
}

// Function definition
string concatenateStrings(string str1, string str2) {
    return str1 + " " + str2;  // Return value of type string
}

