#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	
	cout<<"Enter first value: ";
	cin>>a;
	cout<<"Enter second value: ";
	cin>>b;
	cout<<"Enter third value:";
	cin>>c;
	
	if(a==b){
		if(b==c){
			cout<<"All values are equal";
		} else {
			cout<<"First and Second values are Same but Third is different";
		}
	} else {
			cout<<"Values are different";
		}
}
