#include <iostream>
using namespace std;

int main() {
	int   integerVal = 5;
    double doubleVal = 20.123;
    
    // Here integerVal is first converted to double and then '+' operation perform
    double result = integerVal + doubleVal;
    
    cout<<"Intger Value "<<integerVal<<" is Converted to Double"<<endl;
    cout<<integerVal<<" + "<<doubleVal<< " Operation is performed"<<endl;
    cout<<"The Result of "<<integerVal<< " + "<<doubleVal<<" is "<<result;
    
}
