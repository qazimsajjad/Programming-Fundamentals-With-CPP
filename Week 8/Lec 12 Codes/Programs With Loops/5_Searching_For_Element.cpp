#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int searchElement, found = 0;

    cout << "Enter the number to search: ";
    cin >> searchElement;

    // Search for the element
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == searchElement) {
            cout << "Element found at index: " << i << endl;
            found = 1;
            break;
        }
    }

    if (!found) {
        cout << "Element not found!" << endl;
    }

    return 0;
}

