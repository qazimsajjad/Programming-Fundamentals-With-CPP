#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization of a char array
    char name[] = {'J', 'o', 'h', 'n', '\0'};  // Explicitly adding null character at the end

    cout << "Name: " << name << endl;  // Output: John
    return 0;
}
