#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1; // Use long long to handle large results

    cout << "Enter a positive number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of a negative number is not defined." << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i; // Multiply i with the current factorial value
        }
        cout << "The factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}
