#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int passed = 0;

	cout<<"This program stores the marks of 5 students and checks how many passed (marks >= 50).\n";
    cout << "Enter marks of 5 students: " << endl;

    // Input marks
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        if (marks[i] >= 50) {
            passed++;
        }
    }

    cout << passed << " students passed the exam." << endl;
    cout << 5 - passed << " students failed the exam." << endl;

    return 0;
}

