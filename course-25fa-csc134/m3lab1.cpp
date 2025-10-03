// CSC 134
// M3LAB1 - Choices with the if statement (customized)
// hernandezm
// 10/03/2025
// A tiny adventure game that uses if/else and helper functions.


#include <iostream>
using namespace std;

void chooseFight();
void chooseRun();

int main() {
  int choice;

  cout << "Welcome to Tiny Adventure!\n";
  cout << "A goblin jumps out of the bushes.\n";
  cout << "Do you FIGHT (1) or RUN (2)?\n";
  cout << "Type 1 or 2: ";
  cin >> choice;

  if (choice == 1) {
    chooseFight();
  } else if (choice == 2) {
    chooseRun();
  } else {
    cout << "I'm sorry, that is not a valid choice.\n";
  }

  cout << "Thanks for playing!\n";
  return 0;
}


void chooseFight() {
  cout << "\nYou chose to FIGHT!\n";
  cout << "Choose your tactic: SWORD (1) or MAGIC (2)? ";
  int tactic;
  cin >> tactic;

  if (tactic == 1) {
    cout << "You swing your sword... Critical hit! The goblin flees.\n";
    cout << "You find 10 gold on the path.\n";
  } else if (tactic == 2) {
    cout << "You cast a firebolt... It fizzles. The goblin bonks you.\n";
    cout << "You lose 2 HP but scare it off with a loud roar.\n";
  } else {
    cout << "You hesitate and the goblin runs away. Maybe next time!\n";
  }
}

void chooseRun() {
  cout << "\nYou chose to RUN!\n";
  cout << "You sprint to safety and discover a hidden shortcut.\n";
  cout << "You reach town faster, but drop a copper coin on the way.\n";
}