#include <iostream>
using namespace std;

// Function declaration
void findMax(int a, int b);

int main() {
    int x = 10, y = 20;
    findMax(x, y);  // Function call with arguments
    return 0;
}

// Function definition
void findMax(int a, int b) {
    if (a > b) {
        cout << a << " is the larger number." << endl;
    } else {
        cout << b << " is the larger number." << endl;
    }
}

