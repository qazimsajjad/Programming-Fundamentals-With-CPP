#include <iostream>
using namespace std;

int main() {
    int correctAnswers = 18;
    int totalQuestions = 20;

    // Calculate percentage by casting one operand to double
    double percentage = ( correctAnswers / totalQuestions) * 100;

    cout<<"*****************************************\n";
	cout<<"\nThis program explicitly converts the"
	    <<"\nint correctAnswers into double for Percentage\n";
	cout<<"\n*****************************************\n\n";
	
	cout<<"Percentage Score = ("<<correctAnswers<<" / "<< totalQuestions << ") x 100"<<endl;
    cout << "Percentage score: " << percentage << "%" << endl;

    return 0;
}
