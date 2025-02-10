#include <iostream>
using namespace std;

// Function declaration
void deposit();

int main() {
    deposit();
    return 0;
}

// Function definition
void deposit() {
    double balance = 1000.0; // initial balance
    double depositAmount = 200.0;
    balance += depositAmount;
    cout << "Updated balance after deposit: " << balance << endl;
}

