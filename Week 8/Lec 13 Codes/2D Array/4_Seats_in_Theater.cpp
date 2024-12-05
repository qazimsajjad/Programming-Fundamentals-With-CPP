#include <iostream>
using namespace std;

int main() {
    // Declaring a 2D array to represent a theater seating arrangement
    char seats[3][3] = {
        {'A', 'A', 'A'},  // Row 1: All seats are available
        {'B', 'A', 'B'},  // Row 2: Some seats are booked
        {'A', 'A', 'A'}   // Row 3: All seats are available
    };

    // Displaying the seating arrangement
    cout << "Theater Seating Arrangement (A = Available, B = Booked):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

