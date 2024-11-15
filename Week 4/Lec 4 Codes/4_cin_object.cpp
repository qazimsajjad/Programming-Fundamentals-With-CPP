#include <iostream>
using namespace std;

int main() {
	
	// Single input
	int age;
	cout<<"Single Input\n";
	cout<<"Enter your age: ";
	cin>> age;
	cout<<"Your age is: "<<age;
	
	// Multiple Inputs
	int num1, num2;
	cout<<"\n\nMultiple Inputs";
	cout<<"\nEnter two values separated by a space: ";
	cin>> num1 >> num2;
	cout<<"You entered "<<num1<<" and "<<num2;
	return 0;
}
