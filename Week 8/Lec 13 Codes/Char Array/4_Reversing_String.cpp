#include <iostream>
#include <cstring>  // For strlen()
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);  // Reading a full line including spaces

    int length = strlen(str);  // Get the length of the string
    cout << "Reversed string: ";

    // Loop to print the string in reverse order
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    cout << endl;
    return 0;
}

