#include <iostream>
using namespace std;

int main() {
	int sub1, sub2, sub3, avg;
	char grade;
	
	cout<<"Enter the marks of subject 1: ";
	cin>>sub1;
	cout<<"Enter the marks of subject 2: ";
	cin>>sub2;
	cout<<"Enter the marks of subject 3: ";
	cin>>sub3;
	
	avg = (sub1 + sub2 + sub3) / 3;
	
	if (avg >= 80)
        grade = 'A';
        
    else if (avg >= 70)
        grade = 'B';
        
    else if (avg >= 60)
        grade = 'C';
        
    else if (avg >= 50)
        grade = 'D';
        
    else 
        grade = 'F';
    
    cout<<"Your Grade is: "<<grade;
    
    return 0;
}
