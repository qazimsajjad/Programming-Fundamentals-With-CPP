#include <iostream>
using namespace std;

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    double result;

    // Perform calculation based on user choice
    switch(operation) {
        case '+':
            result = add(num1, num2);  // Calling add function
            break;
        case '-':
            result = subtract(num1, num2);  // Calling subtract function
            break;
        case '*':
            result = multiply(num1, num2);  // Calling multiply function
            break;
        case '/':
            if (num2 != 0) {
                result = divide(num1, num2);  // Calling divide function
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1;  // Exit program if division by zero
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1;  // Exit program if invalid operation is entered
    }

    cout << "The result of " << num1 << " " << operation << " " << num2 << " is: " << result << endl;

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;  // Return the sum
}

double subtract(double a, double b) {
    return a - b;  // Return the difference
}

double multiply(double a, double b) {
    return a * b;  // Return the product
}

double divide(double a, double b) {
    return a / b;  // Return the quotient
}

