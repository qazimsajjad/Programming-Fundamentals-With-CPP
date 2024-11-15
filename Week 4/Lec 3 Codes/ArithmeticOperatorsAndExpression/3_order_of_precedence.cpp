#include <iostream>
using namespace std;

int main() {
    // Declare some variables
    int a = 5, b = 3, c = 2;
    
    // Display the expressions and results to show the order of precedence
    cout << "Initial Values: a = " << a << ", b = " << b << ", c = " << c << endl;
    
    // Without parentheses, the precedence of operators is followed
    int result1 = a + b * c;  // Multiplication first, then addition
    cout << "a + b * c = " << result1 << " (Multiplication first, then addition)" << endl;
    
    // Using parentheses to change the order of operations
    int result2 = (a + b) * c;  // Parentheses change the order, addition first, then multiplication
    cout << "(a + b) * c = " << result2 << " (Addition first, then multiplication)" << endl;

    // Example with more operators
    int result3 = a - b + c;  // Addition and subtraction are left to right
    cout << "a - b + c = " << result3 << " (Left to right)" << endl;

    // Combining multiple operators with different precedence
    int result4 = a + b * c - a / b;  // Multiplication and division first, then addition and subtraction
    cout << "a + b * c - a / b = " << result4 << " (Multiplication/Division first, then Addition/Subtraction)" << endl;

    return 0;
}

