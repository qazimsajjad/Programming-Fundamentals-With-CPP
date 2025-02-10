#include <iostream>
using namespace std;

double balance = 1000;  // Global variable (Initial bank balance)

void deposit() {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;  // Modifying global variable
    cout << "New Balance: " << balance << endl;
}

void withdraw() {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount > balance) {
        cout << "Insufficient funds!" << endl;
    } else {
        balance -= amount;  // Modifying global variable
        cout << "New Balance: " << balance << endl;
    }
}

int main() {
    cout << "Initial Balance: " << balance << endl;
    deposit();  
    withdraw(); 
    cout << "Final Balance: " << balance << endl;
    return 0;
}

