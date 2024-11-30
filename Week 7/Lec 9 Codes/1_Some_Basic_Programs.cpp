#include <iostream>
using namespace std;

int main() {
	cout<<"=========================================\n";
	cout<<"\nPrint Numbers from 1 to 10\n";
	for(int i = 1; i<=10; i++)
		cout<<i<<" ";

	cout<<"\n\nPrint Numbers from 10 to 1\n";
	for(int i = 10; i>=1; i--)
		cout<<i<<" ";

	cout<<"\n\nPrint Enven Numbers between 1 and 20\n";
	for(int i = 2; i<=20; i+=2)
		cout<<i<<" ";

	cout<<"\n\nPrint Odd Numbers between 1 and 20\n";
	for(int i = 1; i<=20; i+=2)
		cout<<i<<" ";
	cout<<"\n\n==========================================\n";
	
	return 0;
}
