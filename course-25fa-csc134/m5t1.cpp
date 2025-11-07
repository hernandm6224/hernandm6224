/*
hernandezm
11/06/2025
CSC 134
M5T1
*/

#include <iostream>
#include <iomanip>
using namespace std;

double calc_average(double s1, double s2, double s3);  
void print_result(double average);                     

int main() {
    double score1, score2, score3;

    cout << "=== Test Average Calculator ===" << endl;

    cout << "Enter score 1: ";
    cin >> score1;

    cout << "Enter score 2: ";
    cin >> score2;

    cout << "Enter score 3: ";
    cin >> score3;

    double avg = calc_average(score1, score2, score3);

    print_result(avg);

    return 0;
}

double calc_average(double s1, double s2, double s3) {
    double average = (s1 + s2 + s3) / 3.0;
    return average;      
}

void print_result(double average) {
    cout << fixed << setprecision(2);
    cout << "\nAverage score: " << average << endl;

    if (average >= 90) {
        cout << "Letter grade: A" << endl;
    } else if (average >= 80) {
        cout << "Letter grade: B" << endl;
    } else if (average >= 70) {
        cout << "Letter grade: C" << endl;
    } else if (average >= 60) {
        cout << "Letter grade: D" << endl;
    } else {
        cout << "Letter grade: F" << endl;
    }
}
