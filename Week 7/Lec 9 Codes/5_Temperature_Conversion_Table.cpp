#include <iostream>
using namespace std;

int main() {
    cout << "Celsius\tFahrenheit" << endl;

    for (int celsius = 0; celsius <= 100; celsius += 10) { // Start at 0, end at 100, step by 10
        double fahrenheit = (celsius * 9.0 / 5) + 32; // Formula for conversion
        cout << celsius << "\t" << fahrenheit << endl;
    }

    return 0;
}
