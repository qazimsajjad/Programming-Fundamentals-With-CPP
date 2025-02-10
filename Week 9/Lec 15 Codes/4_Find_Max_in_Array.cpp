#include <iostream>
using namespace std;

// Function declaration
void findMax(int arr[], int size);

int main() {
    int numbers[] = {5, 2, 9, 12, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);  // Calculate the size of the array
    findMax(numbers, size);  // Passing array and its size as arguments
    return 0;
}

// Function definition
void findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "The maximum element is: " << max << endl;
}

