#include <iostream>
using namespace std;

int main() {
	int   integerVal = 5;
    float floatVal = 10.5f;
    
    // Here integerVal is first converted to float in and then '+' operation perform
    float result = integerVal + floatVal;
    
    cout<<"Intger Value "<<integerVal<<" is Converted to Float"<<endl;
    cout<<integerVal<<" + "<<floatVal<< " Operation is performed"<<endl;
    cout<<"The Result of "<<integerVal<< " + "<<floatVal<<" is "<<result;
    
}
