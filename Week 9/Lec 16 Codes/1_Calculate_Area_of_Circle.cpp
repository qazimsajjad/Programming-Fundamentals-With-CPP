#include <iostream>
using namespace std;

// Function declaration
double calculateArea(double radius);

int main() {
    double radius = 5.0;
    double area = calculateArea(radius);  // Function call and returning value
    cout << "The area of the circle is: " << area << " square units." << endl;
    return 0;
}

// Function definition
double calculateArea(double radius) {
    return 3.14159 * radius * radius;  // Return value of type double
}
