#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

rerun: // Label for restarting the program
    cout << "Enter Num 1: ";
    cin >> num1;

    cout << "Enter Operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter Num 2: ";
    cin >> num2;

    // Perform operation based on the entered operator
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
            
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
            
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
            
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
                goto invalid_input; // Redirect to fix the input
            }
            break;
            
        default:
            cout << "Invalid Operator" << endl;
            goto invalid_input; // Redirect to fix the input
    }

    // Ask user if they want another operation
    cout << "Do you want another operation? (Enter Y/y for Yes): ";
    char choice;
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
        goto rerun;

    return 0;

invalid_input: // Label for handling invalid input
    cout << "Please re-enter the correct operator or valid numbers." << endl;
    goto rerun; // Restart the entire program from the beginning
}

