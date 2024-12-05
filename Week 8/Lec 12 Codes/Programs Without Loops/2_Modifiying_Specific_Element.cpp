#include <iostream>
using namespace std;

int main() {
    int values[3] = {5, 10, 15};

    // Modify the second element
    values[1] = 20;

    cout << "Updated Array: " << endl;
    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;

    return 0;
}

