#include<iostream>
using namespace std;

int main() {
	
	cout<<"QUALIFIERS: \n";
	char ch1 = 'A';
	signed char ch2 = -65;
	unsigned char ch3 = '$';
	
	cout<<ch1<<endl;
	cout<<ch2<<endl;
	cout<<ch3<<endl;
	
	cout<<"\nSYMBOLS/CHARACTERS AND THEIR ASCII:\n";
	// Assigning SYMBOL and Printing Its ASCII code
	char letter = 'A';
	cout<<"Character :"<<letter<<endl;
	cout<<"ASCII Value: "<< int(letter)<<endl; // typecasting char to int
	
	// Assigning ASCII number and Printing SYMBOL
	char ascii_letter = 67;
	cout<<"ASCII :"<<int(ascii_letter)<<endl;
	cout<<"Character: "<<ascii_letter;
	
	return 0;
	
	
}
