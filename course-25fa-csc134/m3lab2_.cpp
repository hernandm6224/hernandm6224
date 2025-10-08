/*
CSC 134
M3LAB2
hernandezm
10/07/2025
*/


#include <iostream>
using namespace std;

int main() {
    int grade;
    char letterGrade;

    cout << "Enter your numerical grade: ";
    cin >> grade;

    if (grade >= 90 && grade <= 100) {
        letterGrade = 'A';
    }
    else if (grade >= 80 && grade <= 89) {
        letterGrade = 'B';
    }
    else if (grade >= 70 && grade <= 79) {
        letterGrade = 'C';
    }
    else if (grade >= 60 && grade <= 69) {
        letterGrade = 'D';
    }
    else if (grade >= 0 && grade <= 59) {
        letterGrade = 'F';
    }
    else {
        cout << "Invalid grade entered. Please enter a value between 0 and 100." << endl;
        return 0;  // Exit if grade is out of range
    }

    cout << "Your letter grade is: " << letterGrade << endl;

    return 0;
}
