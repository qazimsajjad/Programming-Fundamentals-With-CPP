#include <iostream>
using namespace std;

int main() {
    // Predefined dividend and divisor
    int dividend = 17;
    int divisor = 5;

    // Calculate the remainder using modulus operator
    int remainder = dividend % divisor;

    // Output the result
    cout << "The remainder when " << dividend << " is divided by " << divisor
		 << " is " << remainder << endl;

    return 0;
}
