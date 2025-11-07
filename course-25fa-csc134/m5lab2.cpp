/*
hernandezm
11/06/2025
CSC 134
M5Lab2
*/
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int get_choice(int size);

int main() {
    double length = getLength();
    double width  = getWidth();
    double area   = getArea(length, width);

    displayData(length, width, area);

    return 0;
}

double getLength() {
    double length;
    cout << "Enter the rectangle length: ";
    cin  >> length;
    return length;
}

double getWidth() {
    double width;
    cout << "Enter the rectangle width: ";
    cin  >> width;
    return width;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << fixed << setprecision(2);   // two decimal places

    cout << "\n--- Rectangle Information ---\n";
    cout << "Length : " << length << endl;
    cout << "Width  : " << width  << endl;
    cout << "Area   : " << area   << endl;
    cout << "-----------------------------\n";
}

int get_choice(int size) {
    int choice = 0;

    while (choice < 1 || choice > size) {
        cout << "Choose (1-" << size << "): ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and "
                 << size << "." << endl;
            choice = 0; // force loop again
        }
    }

    cout << "You picked option #" << choice << endl;
    return choice;
}
