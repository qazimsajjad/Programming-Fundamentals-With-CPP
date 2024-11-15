#include <iostream>
using namespace std;

int main() {
    int attendance = 80;   // Student's attendance percentage
    int testScore = 55;    // Student's test score

    // Check attendance requirement
    if (attendance >= 75) {
        // If attendance is sufficient, check test score
        if (testScore >= 50) {
            cout << "The student passes!" << endl;
        } else {
            cout << "The student fails due to low test score." << endl;
        }
    } else {
        cout << "The student fails due to low attendance." << endl;
    }

    return 0;
}

