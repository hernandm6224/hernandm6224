/*
CSC 134
M6T1
hernandezm
11/30/2025
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void part1_no_array();
void part2_with_array();

string getDayName(int dayIndex) {
    switch (dayIndex) {
        case 0: return "Monday";
        case 1: return "Tuesday";
        case 2: return "Wednesday";
        case 3: return "Thursday";
        case 4: return "Friday";
        default: return "Unknown";
    }
}

int main() {
    cout << "=== M6T1: Car Counts at Construction Site ===\n\n";

    cout << "--- Part 1: Loop, No Arrays ---\n";
    part1_no_array();

    cout << "\n--- Part 2: Loop with Arrays and Bar Chart ---\n";
    part2_with_array();

    cout << "\nDone.\n";
    return 0;
}

void part1_no_array() {
    const int NUM_DAYS = 5;
    int totalCars = 0;

    for (int day = 0; day < NUM_DAYS; day++) {
        int cars;
        string dayName = getDayName(day);

        cout << "Enter cars for " << dayName << ": ";
        cin >> cars;

        while (cars < 0) {
            cout << "Cars can’t be negative. Re-enter for " << dayName << ": ";
            cin >> cars;
        }

        totalCars += cars;
    }

    double average = static_cast<double>(totalCars) / NUM_DAYS;

    cout << "\nTotal cars (Mon–Fri): " << totalCars << endl;
    cout << fixed << setprecision(2);
    cout << "Average per day:      " << average << endl;
}

void part2_with_array() {
    const int NUM_DAYS = 5;
    int cars[NUM_DAYS];               
    string days[NUM_DAYS] = { "Mon", "Tue", "Wed", "Thu", "Fri" };

    int totalCars = 0;

    for (int i = 0; i < NUM_DAYS; i++) {
        cout << "Enter cars for " << days[i] << ": ";
        cin >> cars[i];

        while (cars[i] < 0) {
            cout << "Cars can’t be negative. Re-enter for " << days[i] << ": ";
            cin >> cars[i];
        }

        totalCars += cars[i];
    }

    double average = static_cast<double>(totalCars) / NUM_DAYS;

    cout << "\nTotal cars (Mon–Fri): " << totalCars << endl;
    cout << fixed << setprecision(2);
    cout << "Average per day:      " << average << endl;

    
    cout << "\nCar Counts Bar Chart (each * ≈ 10 cars)\n";
    cout << "---------------------------------------\n";

    for (int i = 0; i < NUM_DAYS; i++) {
        cout << setw(3) << days[i] << " | ";

        int stars = cars[i] / 10;   
        if (stars == 0 && cars[i] > 0) {
            stars = 1; 
        }

        for (int s = 0; s < stars; s++) {
            cout << "*";
        }

        cout << " (" << cars[i] << ")\n";
    }
}
