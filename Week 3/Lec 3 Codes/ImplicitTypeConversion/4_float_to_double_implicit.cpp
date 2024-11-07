#include <iostream>
using namespace std;

int main() {
	float floatVal = 10.5f;
    double doubleVal = 20.123;
    
    // Here floatVal is first converted to double and then '+' operation perform
    double result = floatVal + doubleVal;
    
    cout<<"Intger Value "<<floatVal<<" is Converted to Double"<<endl;
    cout<<floatVal<<" + "<<doubleVal<< " Operation is performed"<<endl;
    cout<<"The Result of "<<floatVal<< " + "<<doubleVal<<" is "<<result;
    
}
