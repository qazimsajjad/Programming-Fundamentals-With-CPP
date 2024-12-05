#include <iostream>
#include <cstring>  // For strlen()
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);  // Taking input as a string

    int length = strlen(str);
    bool isPalindrome = true;

    // Check if the string is the same forwards and backwards
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The string is a palindrome!" << endl;
    } else {
        cout << "The string is not a palindrome!" << endl;
    }

    return 0;
}

// Palindrome String: Sas --> become sas (same) when reverse
// Not Palindrome String: Sasa --> become asas when reverse
