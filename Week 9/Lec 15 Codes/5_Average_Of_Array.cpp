#include <iostream>
using namespace std;

// Function declaration
void calculateAverage(int arr[], int size);

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    calculateAverage(numbers, size);  // Passing array and its size as arguments
    return 0;
}

// Function definition
void calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / size;
    cout << "The average of the elements is: " << average << endl;
}

