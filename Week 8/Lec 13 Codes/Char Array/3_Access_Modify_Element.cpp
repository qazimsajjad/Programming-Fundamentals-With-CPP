#include <iostream>
using namespace std;

int main() {
    char word[] = "Cplusplus";

    // Accessing individual characters in the array
    cout << "First character: " << word[0] << endl;  // Output: C
    cout << "Fifth character: " << word[4] << endl;  // Output: l

	// Modifying element
    word[1] = 'O';
    cout << "Modified word: " << word << endl;  // Output: COpplus

    return 0;
}

