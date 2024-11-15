#include <iostream>
#include <cmath> // for round function
using namespace std;

int main() {
    float exactValue = 4.57;

    // Ceil of the float and explicitly cast to int
    int ceilValue = (int) exactValue;

    cout<<"*****************************************\n";
	cout<<"\nThis program explicitly converts the"
	    <<"\nfloat exactValue into int for Ceil\n";
	cout<<"\n*****************************************\n\n";
	
    cout << "Exact value: " << exactValue << endl;
    cout << "Ceil value (int): " << ceilValue << endl;

    return 0;
}
