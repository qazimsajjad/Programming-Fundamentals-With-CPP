#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int candidate = 101; // Start checking from 101
    while (candidate % num != 0) {
        candidate++; // Keep increasing until divisible
    }

    cout << "The smallest number greater than 100 that is divisible by " << num << " is: " << candidate << endl;
    return 0;
}

