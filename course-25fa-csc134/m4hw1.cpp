/*
hernandezm
10/28/2025
CSC 134
M4HW1 - Gold Level
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    int i = 1;

    // Ask until valid number (input validation)
    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    while (number < 1 || number > 12) {
        cout << "Invalid input. Please enter a number between 1 and 12: ";
        cin >> number;
    }

    // Print the times table
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }

    return 0;
}
