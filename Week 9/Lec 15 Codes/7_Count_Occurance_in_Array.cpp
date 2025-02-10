#include <iostream>
using namespace std;

// Function declaration
void countOccurrences(int arr[], int size, int element);

int main() {
    int numbers[] = {5, 3, 7, 3, 9, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int element = 3;
    countOccurrences(numbers, size, element);  // Passing array, its size, and the element to search for
    return 0;
}

// Function definition
void countOccurrences(int arr[], int size, int element) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            ++count;
        }
    }
    cout << "The element " << element << " occurs " << count << " times in the array." << endl;
}

