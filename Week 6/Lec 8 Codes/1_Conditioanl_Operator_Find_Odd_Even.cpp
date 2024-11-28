#include <iostream>
using namespace std;

int main() {
    int number;

    // Input: Prompt user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Conditional Operator: Check if the number is even or odd
    cout <<"The number "<< number <<" is "<< (number % 2 == 0 ? "Even" : "Odd");

    return 0;
}

