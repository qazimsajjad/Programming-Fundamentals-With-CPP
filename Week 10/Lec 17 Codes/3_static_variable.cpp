#include <iostream>
using namespace std;

bool loggedIn = false; // global  variable
void login() {
    static int attempts = 0;  // Static variable
    string password;
    string correctPassword = "pass123";

    cout << "Enter password: ";
    cin >> password;

    attempts++;  // Increments with every function call

    if (password == correctPassword) {
        cout << "Login Successful!" << endl;
        loggedIn = true;
    } else {
        cout << "Incorrect Password! Attempt: " << attempts << "/3" << endl;
    }
}

int main() {
    login(); // Attempt 1
    if(loggedIn == true)
    	return 0;
    else
    	login(); // Attempt 2
    if(loggedIn == true)
    	return 0;
    else
    	login(); // Attempt 3
    return 0;
}
