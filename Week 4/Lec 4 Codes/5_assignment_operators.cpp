#include <iostream>
using namespace std;

int main() {
	int x = 10;
	x += 5; // Equivalent to: x = x + 5;  x now becomes 15
	cout<<"x += 5 = "<<x<<endl;
	
	x -= 3; // Equivalent to: x = x - 3;  x now becomes 12
	cout<<"x -= 3 = "<<x<<endl;
	
	x *= 2; // Equivalent to: x = x * 2;  x now becomes 24
	cout<<"x *= 2 = "<<x<<endl;
	
	x /= 4; // Equivalent to: x = x / 4;  x now becomes 6
	cout<<"x /= 4 = "<<x<<endl;
	
	x %= 5; // Equivalent to: x = x % 5;  x now becomes 1
	cout<<"x %= 5 = "<<x<<endl;
	
	return 0;

}
