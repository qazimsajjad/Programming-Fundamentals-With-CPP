#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 25, 5, 40, 30};
    int max = numbers[0];

    // Find the maximum element
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    cout << "The largest element is: " << max << endl;

    return 0;
}

