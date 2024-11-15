#include <iostream>
using namespace std;

int main() {
    int integerVal = 5;
    float floatVal = 10.5f;
    double doubleVal = 20.123;
    char charVal = 'A'; // ASCII value of 'A' is 65


    // Integer and Float: integerVal is implicitly converted to float
    cout << "int to float: " << integerVal << " + " << floatVal << " = " 
         << integerVal + floatVal << " (integerVal is converted to float)" << endl;

    // Integer and Double: integerVal is implicitly converted to double
    cout << "int to double: " << integerVal << " + " << doubleVal << " = " 
         << integerVal + doubleVal << " (integerVal is converted to double)" << endl;

    // Float and Double: floatVal is implicitly converted to double
    cout << "float to double: " << floatVal << " + " << doubleVal << " = " 
         << floatVal + doubleVal << " (floatVal is converted to double)" << endl;

    // Char and Integer: charVal is implicitly converted to int (ASCII value)
    cout << "char to int: " << charVal << " + " << integerVal << " = " 
         << charVal + integerVal << " (charVal is converted to int)" << endl;

    // Char and Float: charVal is implicitly converted to float
    cout << "char to float: " << charVal << " + " << floatVal << " = " 
         << charVal + floatVal << " (charVal is converted to float)" << endl;

    // Integer and Char with Division: integerVal is implicitly converted to double
    cout << "int to double in division: " << integerVal << " / 2 = " 
         << integerVal / 2.0 << " (integerVal is converted to double)" << endl;

    return 0;
}

