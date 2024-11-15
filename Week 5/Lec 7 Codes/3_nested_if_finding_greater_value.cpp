#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	
	cout<<"Enter first value: ";
	cin>>a;
	cout<<"Enter second value: ";
	cin>>b;
	cout<<"Enter third value:";
	cin>>c;
	
	if (a > b)
		if (a > c)
			cout<<"1st Number is greater.";
		else
			cout<<"3rd number is greater.";
	else
		if (b > c)
			cout<<"2nd number is greater.";
		else
			cout<<"3rd number is greater.";
	
	return 0;	
}
