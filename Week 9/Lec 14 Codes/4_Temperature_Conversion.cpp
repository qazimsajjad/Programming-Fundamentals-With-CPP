#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
void convertTemperature() {
    double fahrenheit = 98.6;
    double celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << celsius << "°C" << endl;
}

int main() {
    convertTemperature();
    return 0;
}

