#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    cout << "Enter 5 numbers: " << endl;

    // Input using a loop
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Output using a loop
    cout << "The entered numbers are: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}

