#include <iostream>
using namespace std;

int main() {
    int asciiCode = 65;

    // Explicitly convert ASCII code (int) to char
    char character = (char) asciiCode;
    
    cout<<"*****************************************\n";
	cout<<"\nThis program explicitly converts the"
	    <<"\nint asciiCode into char for character\n";
	cout<<"\n*****************************************\n\n";
	
    cout << "The character for ASCII code " << asciiCode << " is: " << character << endl;

    return 0;
}
