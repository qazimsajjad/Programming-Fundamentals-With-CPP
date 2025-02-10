#include <iostream>
using namespace std;

template <typename T>  // Template function
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum (int): " << add(5, 10) << endl;       // Works with int
    cout << "Sum (double): " << add(2.5, 3.5) << endl; // Works with double
    return 0;
}

