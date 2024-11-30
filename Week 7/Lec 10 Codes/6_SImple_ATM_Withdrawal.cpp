#include <iostream>
using namespace std;

int main() {
    int balance = 1000; // Initial balance
    int withdrawal;

    cout << "Your current balance is: $" << balance << endl;
    cout << "Enter the amount to withdraw: ";
    cin >> withdrawal;

    while (withdrawal > balance || withdrawal <= 0) {
        cout << "Invalid amount! Enter a valid amount to withdraw: ";
        cin >> withdrawal;
    }

    balance -= withdrawal; // Deduct withdrawal from balance
    cout << "Withdrawal successful! Remaining balance: $" << balance << endl;
    return 0;
}

/*
Simulate an ATM system where the user enters their withdrawal amount. 
Keep prompting until they enter a valid amount (less than their balance).
*/
