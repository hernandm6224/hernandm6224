/*
hernandezm
10/16/2025
CSC 134
M4T1
*/

#include <iostream>
using namespace std;

int main() {
    int count = 1;
    while (count <= 5) {
        cout << "Hello\n";
        count++;
    }

    cout << endl;

    int number = 1;
    cout << "Number\tSquare\n";
    cout << "-----------------\n";
    while (number <= 10) {
        cout << number << "\t" << (number * number) << endl;
        number++;
    }

    return 0;
}
