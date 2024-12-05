#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Reversed array: " << endl;

    // Print in reverse order
    for (int i = 4; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    return 0;
}

