#include <iostream>
using namespace std;

int main() {
    float expenses[12];
    float total = 0;

	cout<<"This program stores the monthly expenses of a household and calculates the total expense.\n";
    cout << "Enter monthly expenses for the year: " << endl;

    // Input expenses
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << ": ";
        cin >> expenses[i];
        total += expenses[i];
    }

    cout << "Total expenses for the year: Rs. " << total << endl;

    return 0;
}

