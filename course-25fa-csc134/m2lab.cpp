/*
CSC 134
M2LAB1
hernandezm
10/03/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    const double COST_PER_CUFT   = 0.30; // company storage/build cost
    const double CHARGE_PER_CUFT = 0.52; // price charged to customer

    
    double length{}, width{}, height{};

    cout << "===== M2LAB1: General Crates (Case Study 3.11) =====\n";
    cout << fixed << setprecision(2);

    cout << "Enter crate length (ft): ";
    cin  >> length;
    cout << "Enter crate width  (ft): ";
    cin  >> width;
    cout << "Enter crate height (ft): ";
    cin  >> height;

    
    double volume = length * width * height;       // cubic feet
    double cost   = volume * COST_PER_CUFT;        // your cost
    double charge = volume * CHARGE_PER_CUFT;      // customer price
    double profit = charge - cost;                 // margin


    cout << "\n--- General Crates Report ---\n";
    cout << "Volume: " << volume << " cubic feet\n";
    cout << "Cost:   $" << cost   << '\n';
    cout << "Charge: $" << charge << '\n';
    cout << "Profit: $" << profit << '\n';

    return 0;
}
