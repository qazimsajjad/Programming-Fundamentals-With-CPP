#include <iostream>
using namespace std;

int main() {
    double numerator = 10.0;
    double denominator = 1; 
    double result;

    if (denominator == 0) {
        // Jump to cleanup if denominator is 0
        goto cleanup;
    }

    // Perform the division
    result = numerator / denominator;
    cout << "Result: " << result << endl;
    return 0;

cleanup:
    cerr << "Error: Division by zero is not allowed." << endl;
    cout << "Program has finished executing." << endl;
    return 0;
}

