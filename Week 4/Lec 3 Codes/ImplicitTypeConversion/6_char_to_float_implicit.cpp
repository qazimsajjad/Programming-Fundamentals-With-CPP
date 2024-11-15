#include <iostream>
using namespace std;

int main() {
	float floatVal = 10.5f;
    char charVal = 'A'; // ASCII value of 'A' is 65
    
    // Here integerVal is first converted to float and then '+' operation perform
    double result = floatVal + charVal;
    
    cout<<"Intger Value "<<floatVal<<" is Converted to Float"<<endl;
    cout<<floatVal<<" + "<<charVal<< " Operation is performed"<<endl;
    cout<<"The Result of "<<floatVal<< " + "<<charVal<<" is "<<result;
    
}
