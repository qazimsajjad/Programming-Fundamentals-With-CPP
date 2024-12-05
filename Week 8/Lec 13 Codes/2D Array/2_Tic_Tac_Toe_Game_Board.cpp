#include <iostream>
using namespace std;

int main() {
    // Declaring a 3x3 Tic-Tac-Toe board
    char board[3][3] = {
        {' ', ' ', ' '}, // Row 1
        {' ', ' ', ' '}, // Row 2
        {' ', ' ', ' '}  // Row 3
    };

    // Displaying the initial board
    cout << "Tic-Tac-Toe Game Board:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        if (i < 2) {
            cout << "---------" << endl; // Displaying separator between rows
        }
    }

    return 0;
}

