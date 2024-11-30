#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    char choice;

    do {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        fahrenheit = (celsius * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;

        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}

