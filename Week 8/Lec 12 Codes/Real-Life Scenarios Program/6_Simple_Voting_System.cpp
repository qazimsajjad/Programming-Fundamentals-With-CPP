#include <iostream>
using namespace std;

int main() {
    int votes[3] = {0, 0, 0};
    int totalVotes, choice;

	cout<<"This program counts the votes for three candidates in an election.\n";
    cout << "Enter the total number of votes: ";
    cin >> totalVotes;

    cout << "Vote for candidates: 1, 2, or 3" << endl;

    for (int i = 0; i < totalVotes; i++) {
        cout << "Vote " << i + 1 << ": ";
        cin >> choice;
        if (choice >= 1 && choice <= 3) {
            votes[choice - 1]++;
        } else {
            cout << "Invalid vote!" << endl;
        }
    }

    cout << "\nVote counts:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Candidate " << i + 1 << ": " << votes[i] << " votes" << endl;
    }

    return 0;
}

