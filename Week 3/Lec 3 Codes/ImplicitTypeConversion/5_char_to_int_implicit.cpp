#include <iostream>
using namespace std;

int main() {
	int integerVal = 5;
    char charVal = 'A'; // ASCII value of 'A' is 65
    
    // Here integerVal is first converted to int and then '+' operation perform
    double result = integerVal + charVal;
    
    cout<<"Intger Value "<<integerVal<<" is Converted to Integer"<<endl;
    cout<<integerVal<<" + "<<charVal<< " Operation is performed"<<endl;
    cout<<"The Result of "<<integerVal<< " + "<<charVal<<" is "<<result;
    
}
