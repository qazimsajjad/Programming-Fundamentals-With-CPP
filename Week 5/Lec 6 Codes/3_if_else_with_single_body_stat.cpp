#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  // checks if the number is positive
  if (number > 0)
    cout << "You entered a positive integer: " << number << endl;
  
  else
    cout << "You entered a negative integer: " << number << endl;

  cout << "This statement is always executed.";
  
  return 0;
}
