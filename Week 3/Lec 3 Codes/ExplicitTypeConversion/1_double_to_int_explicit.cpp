#include <iostream>
using namespace std;

int main() {
    double radius = 5.7;
    double area = 3.14159 * radius * radius;

    // Explicitly convert the double area to int for rough estimation
    int approxArea = (int)area;
	
	cout<<"*****************************************\n";
	cout<<"\nThis program explicitly converts the"
	    <<"\ndouble area into integer for rough estimation\n";
	cout<<"\n*****************************************\n\n";
	
	cout<<"Radius ="<<radius<<endl;
	cout<<"PI = 3.14159"<<endl;
	cout<<"Area = 3.14159 x "<<radius<<"^2"<<endl;
    cout << "Exact area (double): " << area << endl;
    cout << "Approximate area (int): " << approxArea << endl;

    return 0;
}
