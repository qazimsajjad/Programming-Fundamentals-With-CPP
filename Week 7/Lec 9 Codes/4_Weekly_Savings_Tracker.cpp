#include <iostream>
using namespace std;

int main() {
    int weeklySaving = 100; // Amount saved each week
    int totalSavings = 0;   // To keep track of total savings

    for (int week = 1; week <= 5; week++) { // Loop through 5 weeks
        totalSavings += weeklySaving; // Add weekly savings to total
        cout << "Week " << week << ": Total Savings = $" << totalSavings << endl;
    }

    return 0;
}

