#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	char op; // Arithmetic Operator
	
	cout<<"Enter + for Addition\n";
	cout<<"Enter - for Subtraction\n";
	cout<<"Enter * for Multiplication\n";
	cout<<"Enter / for Division\n";
	cout<<"Enter % for Reminder\n";
	
	cout<<"\n--------------------------\n\n";
	
	cout<<"Enter Data in the following order\n";
	cout<<"Enter num1\nThen space\nThen operator\nThen space\nThen num2\n";
	
	cout<<"\n--------------------------\n\n";
	
	cin>>num1>>op>>num2;
	
	if(op == '+')
		cout<< "Addition = "<<(num1+num2);
	else if(op == '-')
		cout<<"Subtraction = "<<(num1-num2);
	else if(op == '*')
		cout<<"Multiplication = "<<(num1*num2);
	else if(op == '/')
		cout<<"Division = "<<((float)num1/num2);
	else if (op == '%')
		cout<<"Reminder = "<<(num1%num2);
	else 
		cout<<"Invalid Operator";
	
	return 0;
}
