#include <iostream>
using namespace std;

void increaseValue(int &num) {  // Reference parameter
    num += 10;  // Changes original value
}

int main() {
    int value = 50;
    cout << "Before function call: " << value << endl;
    
    increaseValue(value); // Pass by reference
    
    cout << "After function call: " << value << endl;
    return 0;
}

