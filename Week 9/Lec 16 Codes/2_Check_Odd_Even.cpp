#include <iostream>
using namespace std;

// Function declaration
bool isEven(int number);

int main() {
    int num = 7;
    if (isEven(num)) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
    return 0;
}

// Function definition
bool isEven(int number) {
    return (number % 2 == 0);  // Return value of type bool
}

