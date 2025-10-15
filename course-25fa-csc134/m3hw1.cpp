/*
hernandezm
10/15/2025
CSC 134
M3HW1-Gold
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void q1_chatbot() {
    cout << "\nQ1: Simple Chatbot\n";
    cout << "Hello, I'm a C++ program!\nDo you like me? (yes/no): ";
    string answer;
    cin >> answer;

    if (answer == "yes" || answer == "Yes") cout << "That's great! I'm sure we'll get along.\n";
    else if (answer == "no" || answer == "No") cout << "Well, maybe you'll learn to like me later.\n";
    else cout << "If you're not sure... that's OK.\n";
}

void q2_receipt() {
    cout << "\nQ2: Receipt Calculator\n";
    const double TAX_RATE = 0.07, TIP_RATE = 0.15;
    double mealPrice, taxAmount, tipAmount = 0, total;
    int orderType;

    cout << "Enter the price of the meal: $";
    cin >> mealPrice;
    cout << "Enter 1 for Dine-In or 2 for Takeaway: ";
    cin >> orderType;

    taxAmount = mealPrice * TAX_RATE;
    if (orderType == 1) tipAmount = mealPrice * TIP_RATE;
    total = mealPrice + taxAmount + tipAmount;

    cout << fixed << setprecision(2);
    cout << "\nMeal: $" << mealPrice
         << "\nTax: $" << taxAmount
         << "\nTip: $" << tipAmount
         << "\nTotal: $" << total << endl;
}

void q3_adventure() {
    cout << "\nQ3: Choose Your Own Adventure\n";
    string choice;
    cout << "You wake up in a forest. Do you go left or right? ";
    cin >> choice;

    if (choice == "left") {
        cout << "You find a river. Do you swim or build a raft? ";
        cin >> choice;
        if (choice == "swim") cout << "The current is too strong. Game over!\n";
        else if (choice == "raft") cout << "You cross safely and find treasure. You win!\n";
        else cout << "You wait too long and night falls. Game over!\n";
    }
    else if (choice == "right") {
        cout << "You encounter a bear. Do you run or play dead? ";
        cin >> choice;
        if (choice == "run") cout << "The bear catches you. Game over!\n";
        else if (choice == "dead" || choice == "playdead") cout << "The bear loses interest. You survive! Victory!\n";
        else cout << "You freeze in panic. Game over!\n";
    }
    else cout << "You wander in circles until you fall asleep. Game over!\n";
}

void q4_math_practice() {
    cout << "\nQ4: Math Practice\n";
    srand(static_cast<unsigned int>(time(0)));
    int a = rand() % 10, b = rand() % 10, guess;
    cout << "What is " << a << " + " << b << "? ";
    cin >> guess;

    if (guess == a + b) cout << "Correct!\n";
    else cout << "Incorrect. The correct answer was " << a + b << ".\n";
}

int main() {
    cout << "CSC 134 – M3HW1 (Gold)\nMelissa Hernandez\nOctober 15, 2025\n";
    q1_chatbot();
    q2_receipt();
    q3_adventure();
    q4_math_practice();
    cout << "\nEnd of Program.\n";
    return 0;
}
