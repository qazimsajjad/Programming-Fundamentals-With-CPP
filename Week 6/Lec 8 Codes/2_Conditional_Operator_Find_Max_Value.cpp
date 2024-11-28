#include <iostream>
using namespace std;

int main() {
	int num1, num2;

	cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

	int max = (num1 > num2) ? num1 : num2;

	cout << "The maximum value is: " << max << endl;

    return 0;
}

