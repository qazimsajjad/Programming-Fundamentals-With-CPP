#include <iostream>
using namespace std;

int main() {
    char name[20];

    cout << "Enter your name: ";
    cin >> name; // Reads input until a space or newline is encountered
    cout << "Hello, " << name << "!" << endl;

    return 0;
}

