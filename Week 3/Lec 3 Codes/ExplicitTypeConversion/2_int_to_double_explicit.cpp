#include <iostream>
using namespace std;

int main() {
    int totalScore = 355;
    int totalGames = 8;

    // Explicitly convert totalScore to double for precise average
    double averageScore = (double)totalScore / totalGames;
    double notPreciseAvgScore = totalScore / totalGames;
    
    cout<<"*****************************************\n";
	cout<<"\nThis program explicitly converts the"
	    <<"\nint totalScore into double for precise average\n";
	cout<<"\n*****************************************\n\n";

    cout << "Precise Average score per game: " << averageScore << endl;
    cout << "Not Precise Average score per game: " << notPreciseAvgScore << endl;

    return 0;
}
