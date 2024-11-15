#include <iostream>
using namespace std;

int main() {
	int subj1, subj2, subj3, avg;
	char grade;
	
	cout<<"Enter the marks of subject 1: ";
	cin>>subj1;
	cout<<"Enter the marks of subject 2: ";
	cin>>subj2;
	cout<<"Enter the marks of subject 3: ";
	cin>>subj3;
	
	avg = (subj1 + subj2 + subj3) / 3;
	
	if (avg > 33)
		if (avg > 50)
			if(avg > 80)
				grade = 'A';
			else
				grade = 'B';
		else
			grade = 'C';
	else
		grade = 'F';
	
	cout<<"Grade: "<<grade;
	
	return 0;
}
