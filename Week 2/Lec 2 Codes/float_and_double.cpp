#include<iostream>
#include<iomanip> // For pi value as iostream doesn't display full value
using namespace std;

int main() {
	
	float price = 19.99f;
	double distance = 300000000.0; // speed of light
	long double preciseValue = 3.141592653589793238L; // pi value
	
	cout<<"Price :"<<price <<endl;
	cout<<"Distance :"<<distance <<endl;
	
	// set precision to display more digits for long double
	cout<<"Precise Value of Pi :"<< fixed<< setprecision(18)<< preciseValue <<endl;
	
	return 0;
}
