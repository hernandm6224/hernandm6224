/*
hernandezm
10/24/2025
CSC 134
M4Lab1
*/

// hernandezm
// 10/24/2025
// M4T2_AsteriskBlock
// This program prints a block of asterisks based on user-entered height and width.

#include <iostream>
using namespace std;

int main() {
    int height, width;

    // Ask the user for the dimensions
    cout << "Enter height: ";
    cin >> height;

    cout << "Enter width: ";
    cin >> width;

    // Outer loop for height (rows)
    for (int i = 0; i < height; i++) {
        // Inner loop for width (columns)
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        // Move to next line after each row
        cout << endl;
    }

    return 0;
}
