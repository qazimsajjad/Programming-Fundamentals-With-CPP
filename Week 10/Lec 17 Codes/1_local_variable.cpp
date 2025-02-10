#include <iostream>
using namespace std;

void convertTemperature() {
    double celsius;  // Local variable
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9 / 5) + 32;  // Local variable
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
}

int main() {
    convertTemperature();
    // cout << celsius;  // ? Error: 'celsius' is not accessible here
    return 0;
}

