#include <iostream>
using namespace std;

// Function declaration
void greet();

int main() {
    greet();
    return 0;
}

// Function definition
void greet() {
    int hour = 10;  // Use any hour (24-hour format)
    
    if (hour < 12) {
        cout << "Good Morning!" << endl;
    } else {
        cout << "Good Evening!" << endl;
    }
}

