#include <iostream>
using namespace std;

int main() {
    double price, total = 0;
    char choice;

    do {
        cout << "Enter item price: ";
        cin >> price;
        total += price;

        cout << "Do you want to add another item? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Total bill: $" << total << endl;
    return 0;
}

