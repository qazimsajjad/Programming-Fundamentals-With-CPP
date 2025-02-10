#include <iostream>
using namespace std;

void greet(string name = "Guest") {  // Default argument
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Alice");  // Passes "Alice"
    greet();         // Uses default value "Guest"
    return 0;
}

