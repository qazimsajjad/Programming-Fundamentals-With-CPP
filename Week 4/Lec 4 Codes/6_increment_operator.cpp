#include <iostream>
using namespace std;

int main() {
	int a = 5;

	int b = ++a; // Prefix: 'a' is incremented to 6, then 'b' is assigned the value 6
	int c = a++; // Postfix: 'c' is assigned the current value of 'a' (6), then 'a' is incremented to 7

	cout << "a: " << a << endl; 	// a: 7
	cout << "b: " << b << endl; 	// b: 6
	cout << "c: " << c << endl; 	// c: 6
	
	return 0;

}
