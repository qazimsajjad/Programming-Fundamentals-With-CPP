#include <iostream>
using namespace std;

// Function declaration
void calculateArea(double length, double width);

int main() {
    double length = 5.0, width = 3.0;
    calculateArea(length, width);  // Function call with arguments
    return 0;
}

// Function definition
void calculateArea(double length, double width) {
    double area = length * width;
    cout << "The area of the rectangle is: " << area << " square units." << endl;
}

