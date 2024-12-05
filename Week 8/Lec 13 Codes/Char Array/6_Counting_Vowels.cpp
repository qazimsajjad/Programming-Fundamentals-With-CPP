#include <iostream>
#include <cstring>  // For strlen()
using namespace std;

int main() {
    char str[100];
    int vowelCount = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);  // Read the entire string, including spaces

    // Count vowels
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowelCount++;
        }
    }

    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}
