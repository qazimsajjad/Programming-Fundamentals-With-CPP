#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter the number you want to print table of: ";
    cin>>number; cout<<endl;
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
    return 0;
}

