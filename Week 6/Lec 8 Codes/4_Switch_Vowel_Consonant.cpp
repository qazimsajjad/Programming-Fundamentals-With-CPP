#include <iostream>
using namespace std;

int main() {
    char letter;

    cout << "Enter a single letter: ";
    cin >> letter;

    // Convert the letter to lowercase for uniformity
    char lowerLetter = tolower(letter);

    switch (lowerLetter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "The letter '" << letter << "' is a Vowel." << endl;
            break;

        default:
            // Check if the entered character is an alphabet letter
            if ((lowerLetter >= 'a' && lowerLetter <= 'z')) {
                cout << "The letter '" << letter << "' is a Consonant." << endl;
            } else {
                cout << "Invalid input. Please enter a valid alphabet letter." << endl;
            }
            break;
    }

    return 0;
}

