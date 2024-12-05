#include <iostream>
using namespace std;

int main() {
    float sales[7];
    float maxSales = 0;
    int maxDay = 0;

	cout<<"This program stores the daily sales of a shop and finds the highest sales in the week.\n";
    cout << "Enter daily sales for the week: " << endl;

    // Input sales data
    for (int i = 0; i < 7; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> sales[i];
        if (sales[i] > maxSales) {
            maxSales = sales[i];
            maxDay = i + 1;
        }
    }

    cout << "\nThe highest sales were $" << maxSales << " on Day " << maxDay << "." << endl;

    return 0;
}

