#include <iostream>
using namespace std;

// Function declarations
void add();
void subtract();
void multiply();
void divide();

int main() {
    add();
    subtract();
    multiply();
    divide();
    return 0;
}

// Function definitions
void add() {
    int a = 10, b = 5;
    cout << "Sum: " << a + b << endl;
}

void subtract() {
    int a = 10, b = 5;
    cout << "Difference: " << a - b << endl;
}

void multiply() {
    int a = 10, b = 5;
    cout << "Product: " << a * b << endl;
}

void divide() {
    int a = 10, b = 5;
    if (b != 0)
        cout << "Quotient: " << a / b << endl;
    else
        cout << "Cannot divide by zero!" << endl;
}

