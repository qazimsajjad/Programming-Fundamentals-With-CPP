#include <iostream>
using namespace std;

int main() {
	for (char ch = 'A'; ch <= 'Z'; ch++) {
		cout<<ch<<"\t";
	}
	
	// Or
	char ch = 65;
	cout<<"\n\nASCII code:\n\n";
	for (; ch<= 90; ch++) {
		cout<<ch<<"\t";
	}
	
	return 0;
}
