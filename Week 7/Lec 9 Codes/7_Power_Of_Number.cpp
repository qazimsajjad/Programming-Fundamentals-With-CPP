#include <iostream>
using namespace std;

int main() {
    double base, result = 1; 
    int exponent;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;
	
	// If the exponent is negative, make it positive for the loop
    int positiveExponent = (exponent < 0) ? -exponent : exponent;
    
    for (int i = 1; i <= positiveExponent; i++) { // Loop to multiply the base
        result *= base;
    }

    // If the exponent is negative, take the reciprocal
    if (exponent < 0) {
        result = 1.0 / result;
    }

    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}

