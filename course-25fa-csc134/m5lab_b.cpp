/*
hernandezm
10/24/2025
CSC 134
M4Lab1
*/

#include <iostream>
using namespace std;

int main() {
    int height, width;
    char choice;
    int totalStars = 0;

    // Ask the user for the dimensions
    cout << "Enter height: ";
    cin >> height;

    cout << "Enter width: ";
    cin >> width;

    cout << "Do you want a (S)olid block or (B)order only? ";
    cin >> choice;

    cout << "\nYour asterisk block:\n" << endl;

    // Outer loop for height (rows)
    for (int i = 0; i < height; i++) {
        // Inner loop for width (columns)
        for (int j = 0; j < width; j++) {
            if (choice == 'B' || choice == 'b') {
                // Border-only printing
                if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                    cout << "* ";
                    totalStars++;
                } else {
                    cout << "  ";
                }
            } else {
                // Solid block printing
                cout << "* ";
                totalStars++;
            }
        }
        cout << endl;
    }

    cout << "\nTotal asterisks printed: " << totalStars << endl;
    cout << "Block complete!" << endl;

    return 0;
}
