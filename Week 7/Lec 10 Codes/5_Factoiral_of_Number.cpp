#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1, i = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        factorial *= i; // Multiply current number
        i++;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}

