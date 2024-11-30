#include <iostream>
using namespace std;

int main() {
    int base, exponent, result = 1;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    int count = 1; // Counter for the loop
    while (count <= exponent) {
        result *= base; // Multiply base by itself
        count++;
    }

    cout << base << " raised to the power " << exponent << " is: " << result << endl;
    return 0;
}
