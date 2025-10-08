/*
CSC 134
M3T1
hernandezm
10/07/2025
*/


#include <iostream>
using namespace std;

int main() {
    double length1, width1, length2, width2;
    double area1, area2;

    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;

    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;

    area1 = length1 * width1;
    area2 = length2 * width2;

    cout << "\nThe area of the first rectangle is: " << area1 << endl;
    cout << "The area of the second rectangle is: " << area2 << endl;

    return 0;
}
