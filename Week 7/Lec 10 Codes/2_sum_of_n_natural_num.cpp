#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;
    cout << "Enter a positive number: ";
    cin >> n;

    while (i <= n) {
        sum += i; // Add the current number to sum
        i++; // Update variable
    }

    cout << "Sum of first " << n << " numbers is: " << sum << endl;
    return 0;
}

