#include<iostream>
using namespace std;

int main() {
	
	const float PI = 3.14;
	float radius = 6.5;
	double area;
	
	area = PI * radius;
	cout<<"If PI is "<<PI<<endl;
	cout<<"And Radius of a Circle is "<<endl;
	cout<<"Then the Area of the Circle is "<<area;
	
//	PI = 3.142; // Will throw error
//	radius = 5.5; // Will be OK

	return 0;
}
