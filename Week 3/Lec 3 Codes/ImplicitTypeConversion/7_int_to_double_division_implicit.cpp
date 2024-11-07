#include <iostream>
using namespace std;

int main() {
	int   integerVal = 5;
    
    // Here integerVal is first converted to double and then '/' operation perform
    double result = integerVal / 2.0 ;
    
    cout<<"Intger Value "<<integerVal<<" is Converted to Double"<<endl;
    cout<<integerVal<<" / 2 Operation is performed"<<endl;
    cout<<"The Result of "<<integerVal<< " / 2.0 is "<<result;
    
}
