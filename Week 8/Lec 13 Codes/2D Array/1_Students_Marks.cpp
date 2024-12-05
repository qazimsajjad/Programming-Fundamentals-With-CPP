#include <iostream>
using namespace std;

int main() {
    // Declaring a 2D array to store marks of 3 students in 4 subjects
    int marks[3][4] = {
        {85, 90, 88, 92},  // Student 1
        {78, 80, 85, 87},  // Student 2
        {90, 92, 94, 96}   // Student 3
    };

    // Displaying marks of each student
    for (int i = 0; i < 3; i++) {
        cout << "Marks of Student " << i+1 << ": ";
        for (int j = 0; j < 4; j++) {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
