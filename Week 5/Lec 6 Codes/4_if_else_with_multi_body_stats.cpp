#include <iostream>
using namespace std;

int main() {
	int obtainedMarks;
	int totalMarks;
	float percentage;
	
	cout<<"Enter Obtained Marks: ";
	cin>>obtainedMarks;
	cout<<"Enter Total Marks: ";
	cin>>totalMarks;
	
	if(obtainedMarks > 50){
		percentage = (float)obtainedMarks / totalMarks *  100;
		cout<<"Congrats! You are pass.\n";
		cout<<"Your percentage is: "<<percentage<<"%"<<endl;
	}
	
	else {
		percentage = (float)obtainedMarks / totalMarks *  100;
		cout<<"Oops! You are fail.\n";
		cout<<"Your percentage is: "<<percentage<<"%"<<endl;
	}
	cout<<"This line is always executed.";
	
	return 0;
}
