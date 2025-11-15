/*
hernandezm
11/15/2025
CSC 134
M5HW Gold
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;


void question1_averageRainfall();
void question2_blockVolume();
void question3_romanNumeral();
void question4_geometryCalculator();
void question5_distanceTraveled();


int getIntInRange(const string& prompt, int minVal, int maxVal);
double getPositiveDouble(const string& prompt);
double getNonNegativeDouble(const string& prompt);

int main() {
    int choice = 0;

    do {
        cout << "\n===== M5HW1 Main Menu =====\n";
        cout << "1) Average Rainfall (Q1)\n";
        cout << "2) Volume of a Block (Q2)\n";
        cout << "3) Roman Numerals (Q3)\n";
        cout << "4) Geometry Calculator (Q4)\n";
        cout << "5) Distance Traveled (Q5)\n";
        cout << "6) Quit Program\n";

        choice = getIntInRange("Choose an option (1-6): ", 1, 6);

        switch (choice) {
            case 1: question1_averageRainfall();   break;
            case 2: question2_blockVolume();       break;
            case 3: question3_romanNumeral();      break;
            case 4: question4_geometryCalculator();break;
            case 5: question5_distanceTraveled();  break;
            case 6: cout << "\nExiting program. Goodbye!\n"; break;
        }

    } while (choice != 6);

    return 0;
}

int getIntInRange(const string& prompt, int minVal, int maxVal) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a whole number between "
                 << minVal << " and " << maxVal << ".\n";
            continue;
        }

        if (value < minVal || value > maxVal) {
            cout << "Error: Value must be between " << minVal
                 << " and " << maxVal << ".\n";
        } else {
            return value;
        }
    }
}

// Get a double > 0.0
double getPositiveDouble(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a numeric value.\n";
            continue;
        }

        if (value <= 0.0) {
            cout << "Error: Value must be greater than zero.\n";
        } else {
            return value;
        }
    }
}

// Get a double >= 0.0
double getNonNegativeDouble(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a numeric value.\n";
            continue;
        }

        if (value < 0.0) {
            cout << "Error: Value cannot be negative.\n";
        } else {
            return value;
        }
    }
}

void question1_averageRainfall() {
    cout << "\n=== Q1: Average Rainfall ===\n";

    string m1, m2, m3;
    double r1, r2, r3;

    cout << "Enter month: ";
    cin >> m1;
    r1 = getNonNegativeDouble("Enter rainfall for " + m1 + ": ");

    cout << "Enter month: ";
    cin >> m2;
    r2 = getNonNegativeDouble("Enter rainfall for " + m2 + ": ");

    cout << "Enter month: ";
    cin >> m3;
    r3 = getNonNegativeDouble("Enter rainfall for " + m3 + ": ");

    double avg = (r1 + r2 + r3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << m1 << ", " << m2 << ", and " << m3
         << " is " << avg << " inches.\n";
}

void question2_blockVolume() {
    cout << "\n=== Q2: Volume of a Block ===\n";

    double length = getPositiveDouble("Enter length (> 0): ");
    double width  = getPositiveDouble("Enter width (> 0): ");
    double height = getPositiveDouble("Enter height (> 0): ");

    double volume = length * width * height;

    cout << fixed << setprecision(2);
    cout << "The volume of the block is " << volume << " cubic units.\n";
}

void question3_romanNumeral() {
    cout << "\n=== Q3: Roman Numeral Converter ===\n";

    int num = getIntInRange("Enter a number (1-10): ", 1, 10);

    string roman;
    switch (num) {
        case 1:  roman = "I";    break;
        case 2:  roman = "II";   break;
        case 3:  roman = "III";  break;
        case 4:  roman = "IV";   break;
        case 5:  roman = "V";    break;
        case 6:  roman = "VI";   break;
        case 7:  roman = "VII";  break;
        case 8:  roman = "VIII"; break;
        case 9:  roman = "IX";   break;
        case 10: roman = "X";    break;
    }

    cout << "The Roman numeral version of " << num << " is "
         << roman << ".\n";
}

void question4_geometryCalculator() {
    cout << "\n=== Q4: Geometry Calculator ===\n";

    cout << "1) Calculate the Area of a Circle\n";
    cout << "2) Calculate the Area of a Rectangle\n";
    cout << "3) Calculate the Area of a Triangle\n";
    cout << "4) Return to Main Menu\n";

    int choice = getIntInRange("Enter your choice (1-4): ", 1, 4);

    const double PI = 3.14159;

    if (choice == 1) {
        double radius = getNonNegativeDouble("Enter the circle's radius: ");
        double area = PI * radius * radius;
        cout << "The area is " << area << endl;
    }
    else if (choice == 2) {
        double length = getNonNegativeDouble("Enter the rectangle's length: ");
        double width  = getNonNegativeDouble("Enter the rectangle's width: ");
        double area = length * width;
        cout << "The area is " << area << endl;
    }
    else if (choice == 3) {
        double base   = getNonNegativeDouble("Enter the triangle's base: ");
        double height = getNonNegativeDouble("Enter the triangle's height: ");
        double area = base * height * 0.5;
        cout << "The area is " << area << endl;
    }
    else if (choice == 4) {
        cout << "Returning to main menu.\n";
    }
}

void question5_distanceTraveled() {
    cout << "\n=== Q5: Distance Traveled ===\n";

    double speed = getNonNegativeDouble("What is the speed of the vehicle in mph? ");
    int hours    = getIntInRange("How many hours has it traveled? ", 1, 1000000);

    cout << "\nHour  Distance Traveled\n";
    cout << "-----------------------------\n";

    for (int h = 1; h <= hours; h++) {
        double distance = speed * h;
        cout << setw(4) << h << setw(15) << distance << endl;
    }
}
