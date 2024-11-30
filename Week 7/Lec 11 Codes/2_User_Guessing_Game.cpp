#include <iostream>
using namespace std;

int main() {
    int secretNumber = 7, guess;
    do {
        cout << "Guess the secret number (between 1 and 10): ";
        cin >> guess;
        if (guess != secretNumber) {
            cout << "Wrong guess. Try again!" << endl;
        }
    } while (guess != secretNumber);

    cout << "Congratulations! You guessed it!" << endl;
    return 0;
}

