/*
hernandezm
10/24/2025
CSC 134
M5T2
*/

#include <iostream>
#include <iomanip>
using namespace std;

int square(int num);              
void printAnswerLine(int num, int squaredValue);  

int main() {
    cout << "=== Numbers and Their Squares ===" << endl;
    cout << setw(10) << "Number" << setw(15) << "Square" << endl;
    cout << "---------------------------------" << endl;

    for (int i = 1; i <= 10; i++) {
        int sq = square(i);              
        printAnswerLine(i, sq);          
    }

    cout << "---------------------------------" << endl;
    cout << "End of table." << endl;

    return 0;
}

int square(int num) {
    return num * num;
}

void printAnswerLine(int num, int squaredValue) {
    cout << setw(10) << num << setw(15) << squaredValue << endl;
}
