/*
hernandezm
11/06/2025
CSC 134
M5Lab1
*/

#include <iostream>
#include <string>
#include <limits>
using namespace std;

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();

void ending_treasure();
void ending_trap();
void ending_safe();

int main() {
    main_menu();
    return 0;
}

void main_menu() {
    bool done = false;

    while (!done) {
        int choice;

        cout << "\n=== Spooky House Adventure ===\n";
        cout << "1) Go in through the front door\n";
        cout << "2) Sneak around to the back door\n";
        cout << "3) Decide it's a bad idea and go home\n";
        cout << "4) Quit game\n";
        cout << "Choose an option (1-4): ";

        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nThat’s not a number. Please enter 1, 2, 3, or 4.\n";
            continue;
        }

        if (choice == 1) {
            choice_front_door();
        }
        else if (choice == 2) {
            choice_back_door();
        }
        else if (choice == 3) {
            choice_go_home();
        }
        else if (choice == 4) {
            cout << "\nYou walk away from the spooky house. Thanks for playing!\n";
            done = true;
        }
        else {
            cout << "\nInvalid choice. Please enter 1, 2, 3, or 4.\n";
        }
    }
}

void choice_front_door() {
    cout << "\nYou creep up to the front door. It creaks open by itself.\n";
    cout << "Inside, you see a glowing light at the end of the hallway\n";
    cout << "and a staircase leading down into the dark basement.\n\n";

    int choice = 0;
    while (choice != 1 && choice != 2) {
        cout << "1) Follow the strange glowing light\n";
        cout << "2) Go down the basement stairs\n";
        cout << "Choose 1 or 2: ";
        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please type 1 or 2.\n\n";
            continue;
        }

        if (choice == 1) {
            ending_treasure();
        }
        else if (choice == 2) {
            ending_trap();
        }
        else {
            cout << "That’s not a valid option. Try again.\n\n";
        }
    }
}

void choice_back_door() {
    cout << "\nYou sneak quietly around the side of the house.\n";
    cout << "Behind it, you find a loose back door that’s barely hanging on its hinges.\n";
    cout << "You also notice a narrow path leading into the woods.\n\n";

    int choice = 0;
    while (choice != 1 && choice != 2) {
        cout << "1) Slip inside through the back door\n";
        cout << "2) Follow the mysterious path into the woods\n";
        cout << "Choose 1 or 2: ";
        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please type 1 or 2.\n\n";
            continue;
        }

        if (choice == 1) {
            cout << "\nThe back door leads into the kitchen.\n";
            cout << "Someone left fresh cookies on the counter.\n";
            cout << "You grab one (or three) and sneak back out.\n";
            ending_safe();
        }
        else if (choice == 2) {
            cout << "\nYou follow the path and discover an old shed.\n";
            cout << "Inside the shed you find a dusty chest…\n";
            ending_treasure();
        }
        else {
            cout << "That’s not a valid option. Try again.\n\n";
        }
    }
}


void choice_go_home() {
    cout << "\nYou stare at the spooky house for a long moment.\n";
    cout << "Then you remember all the horror movies you’ve seen.\n";
    cout << "\"Nope,\" you say, and head home to binge your favorite show instead.\n";
    ending_safe();
}


void ending_treasure() {
    cout << "\n>>> Ending: Hidden Treasure! <<<\n";
    cout << "You open a secret door and find a chest full of gold and strange artifacts.\n";
    cout << "Congratulations! You are now the somewhat-terrified owner of cursed treasure.\n\n";
}

void ending_trap() {
    cout << "\n>>> Ending: The Basement Trap <<<\n";
    cout << "You step onto the basement floor and feel it sink.\n";
    cout << "A hidden trap springs, filling the room with fog and spooky laughter.\n";
    cout << "Luckily, it’s just an elaborate haunted house attraction, and staff let you out.\n\n";
}

void ending_safe() {
    cout << "\n>>> Ending: Safely Boring <<<\n";
    cout << "Nothing bad happens, nothing magical happens.\n";
    cout << "You live to have more adventures another day.\n\n";
}
