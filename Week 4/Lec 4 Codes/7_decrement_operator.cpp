#include <iostream>
using namespace std;

int main() {
		
	int x = 10;

	int y = --x; // Prefix: 'x' is decremented to 9, then 'y' is assigned the value 9
	int z = x--; // Postfix: 'z' is assigned the current value of 'x' (9), then 'x' is decremented to 8

	cout << "x: " << x << endl; 	// x: 8
	cout << "y: " << y << endl; 	// y: 9
	cout << "z: " << z << endl; 	// z: 9

	
	return 0;

}
