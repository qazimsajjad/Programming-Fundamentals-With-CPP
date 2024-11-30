#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    while (number < 0) {
        cout << "Invalid input! Please enter a positive number: ";
        cin >> number;
    }

    cout << "You entered: " << number << endl;
    return 0;
}


/*
This program asks the user for a positive number. If they enter a negative number, 
keep prompting until they give a positive one.
*/
