#include <iostream>
using namespace std;

void display(int num) {  // Function 1
    cout << "Integer: " << num << endl;
}

void display(double num) {  // Function 2
    cout << "Double: " << num << endl;
}

void display(string text) {  // Function 3
    cout << "String: " << text << endl;
}

int main() {
    display(10);       // Calls int version
    display(3.14);     // Calls double version
    display("Hello");  // Calls string version
    return 0;
}

