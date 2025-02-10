#include <iostream>
using namespace std;

// Function definition (no declaration)
void calculateFactorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    cout << "The factorial of " << n << " is: " << factorial << endl;
}

int main() {
    int number = 5;
    calculateFactorial(number);  // Function call with argument
    return 0;
}

