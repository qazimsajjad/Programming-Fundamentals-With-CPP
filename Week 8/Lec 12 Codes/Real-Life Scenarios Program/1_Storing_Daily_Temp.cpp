#include <iostream>
using namespace std;

int main() {
    float temperatures[7];
    float sum = 0, average;
	
	cout<<"This program stores temperatures for 7 days and calculates the average temperature.\n";
    cout << "Enter temperatures for the week: " << endl;

    // Input temperatures
    for (int i = 0; i < 7; i++) {
        cin >> temperatures[i];
        sum += temperatures[i];
    }

    // Calculate average
    average = sum / 7;

    cout << "The average temperature of the week is: " << average << "°C" << endl;

    return 0;
}

