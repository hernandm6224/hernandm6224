/*
CSC 134
M6HW1-Gold
hernandezm
12/03/2025
*/
#include <iostream>
#include <string>
using namespace std;

bool has_key = false;     
bool game_over = false;     

int get_choice(int min, int max);

void intro();
void foyer();
void library();
void basement();
void locked_door();

void ending_escape();
void ending_trapped();

int main() {
    intro();
    foyer();           
    cout << "\nThanks for playing!\n";
    return 0;
}

int get_choice(int min, int max) {
    int choice;
    while (true) {
        cout << "Choose (" << min << "-" << max << "): ";
        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Please enter a number.\n";
            continue;
        }
        if (choice < min || choice > max) {
            cout << "That isn't a valid option.\n";
        } else {
            return choice;
        }
    }
}


void intro() {
    cout << "=====================================\n";
    cout << "   Haunted House Escape - Prototype  \n";
    cout << "=====================================\n\n";
    cout << "You wake up in the front hallway of a spooky old house.\n";
    cout << "A dusty sign on the wall reads:\n";
    cout << "\"Find the SILVER KEY and unlock the front door to escape.\"\n";
    cout << "If you stay too long, the house will trap you forever...\n\n";
    cout << "Your goal: explore the rooms, find the key, and unlock the door.\n\n";
}

void foyer() {
    while (!game_over) {
        cout << "\n=== Foyer ===\n";
        cout << "You stand in the dimly lit foyer. You see:\n";
        cout << "  1) A heavy front door with an old lock.\n";
        cout << "  2) A doorway leading to a dusty library.\n";
        cout << "  3) Creaky stairs down to the basement.\n";
        cout << "  4) Give up and sit on the floor.\n";

        int choice = get_choice(1, 4);

        if (choice == 1) {
            locked_door();
        } else if (choice == 2) {
            library();
        } else if (choice == 3) {
            basement();
        } else {
            cout << "\nYou sit on the cold floor and let the house slowly grow darker...\n";
            ending_trapped();
        }
    }
}

void library() {
    cout << "\n=== Library ===\n";
    cout << "Dusty shelves line the walls, full of old books.\n";
    cout << "On a small table you see a folded NOTE and a small metal object.\n\n";
    cout << "  1) Read the note.\n";
    cout << "  2) Pick up the metal object.\n";
    cout << "  3) Go back to the foyer.\n";

    int choice = get_choice(1, 3);

    if (choice == 1) {
        cout << "\nYou unfold the note. It reads:\n";
        cout << "\"Only the silver key will open the front door. "
             << "Everything else is a dead end.\"\n";
        cout << "Very helpful, thanks mysterious note.\n";
    } else if (choice == 2) {
        if (!has_key) {
            cout << "\nYou pick up the metal object. It's a SILVER KEY.\n";
            has_key = true;
        } else {
            cout << "\nYou already took the key. The table is empty now.\n";
        }
    } else {
        cout << "\nYou leave the library and return to the foyer.\n";
        return;
    }

    library();
}

void basement() {
    cout << "\n=== Basement ===\n";
    cout << "You carefully walk down the stairs into the dark basement.\n";
    cout << "Cobwebs brush against your face. You hear water dripping.\n";
    cout << "There doesn’t seem to be any key down here.\n\n";

    cout << "  1) Search around anyway.\n";
    cout << "  2) Go back upstairs to the foyer.\n";

    int choice = get_choice(1, 2);

    if (choice == 1) {
        cout << "\nYou wander deeper into the shadows...\n";
        cout << "The steps vanish behind you. The air grows colder.\n";
        cout << "Looks like you chose the wrong place to explore.\n";
        ending_trapped();
    } else {
        cout << "\nYou head back upstairs to the foyer.\n";
    }
}

void locked_door() {
    cout << "\n=== Front Door ===\n";
    cout << "You stand before the heavy wooden front door.\n";
    cout << "There is a large keyhole and a sign that says \"SILVER KEY ONLY\".\n\n";

    if (!has_key) {
        cout << "You try the handle, but it won't budge.\n";
        cout << "You probably need to find the key first.\n";
        cout << "You return to the foyer.\n";
        return;
    } else {
        cout << "You hold the SILVER KEY in your hand.\n";
        cout << "  1) Use the key to unlock the door.\n";
        cout << "  2) Change your mind and go back to the foyer.\n";

        int choice = get_choice(1, 2);

        if (choice == 1) {
            ending_escape();
        } else {
            cout << "\nYou slip the key back into your pocket and return to the foyer.\n";
        }
    }
}


void ending_escape() {
    cout << "\n*** Ending: ESCAPE ***\n";
    cout << "You slide the silver key into the lock and turn it.\n";
    cout << "The door swings open, and cool night air rushes in.\n";
    cout << "You step outside, leaving the haunted house behind you.\n";
    cout << "You WON the game!\n";
    game_over = true;
}

void ending_trapped() {
    cout << "\n*** Ending: TRAPPED ***\n";
    cout << "The house creaks and groans as the last door slams shut.\n";
    cout << "Whatever this place is, it doesn't plan on letting you go.\n";
    cout << "Maybe next time you'll find the key in time...\n";
    game_over = true;
}
