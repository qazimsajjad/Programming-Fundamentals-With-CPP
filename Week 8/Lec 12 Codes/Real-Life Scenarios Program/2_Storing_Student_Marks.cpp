#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float average;

	cout<<"This program calculates the total and average marks of 5 students in a subject.\n";
    cout << "Enter marks of 5 students: " << endl;

    // Input marks
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    // Calculate average
    average = total / 5.0;

    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}

