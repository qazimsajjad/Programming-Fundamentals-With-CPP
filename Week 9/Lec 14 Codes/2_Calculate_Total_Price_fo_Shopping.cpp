#include <iostream>
using namespace std;

// No need for function declaration explicitly
// Function Declared and Defined Here
// Function to calculate total price including tax
void calculateTotal() {
    double price = 100.0;
    double tax = 0.05; // 5% tax
    double total = price + (price * tax);
    cout << "Total price including tax: " << total << endl;
}

int main() {
    calculateTotal();
    return 0;
}
