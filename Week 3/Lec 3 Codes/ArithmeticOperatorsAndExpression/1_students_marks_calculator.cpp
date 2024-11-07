#include <iostream>
using namespace std;

int main() {
    // Marks obtained in subjects
    int math = 85;
    int science = 78;
    int history = 92;
    int english = 74;
    int geography = 88;

    // Total number of subjects
    int numSubjects = 5;

    // Arithmetic operators
    int totalMarks = math + science + history + english + geography;   // Addition
    float averageMarks = totalMarks / (float)numSubjects; // Division
    
    // Suppose there's a 5-mark penalty in Science and 3-mark bonus in English
    int adjustedScience = science - 5;                                 // Subtraction
    int adjustedEnglish = english + 3;                                 // Addition

    // Calculate new total marks with adjustments
    int adjustedTotalMarks = math + adjustedScience + history + adjustedEnglish + geography;

    // Calculate the percentage
    float percentage = (adjustedTotalMarks  / ((float)numSubjects * 100)) * 100; // Multiplication and Division

    // Display results
    cout << "Total Marks: " << totalMarks << " / " << (numSubjects * 100) << endl;
    cout << "Average Marks: " << averageMarks << endl;
    cout << "Adjusted Science Marks: " << adjustedScience << endl;
    cout << "Adjusted English Marks: " << adjustedEnglish << endl;
    cout << "Adjusted Total Marks: " << adjustedTotalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}

