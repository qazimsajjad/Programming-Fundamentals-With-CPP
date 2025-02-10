#include <iostream>
using namespace std;

// Function declaration
void reverseArray(int arr[], int size);

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    reverseArray(numbers, size);  // Passing array and its size as arguments
    return 0;
}

// Function definition
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        ++start;
        --end;
    }

    cout << "The reversed array is: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

