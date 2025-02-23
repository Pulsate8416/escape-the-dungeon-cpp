#include <iostream>
#include <string>

void introduction() {
    std::cout << "Welcome to \"Escape the Dungeon\"\n";
    std::cout << "You find yourself trapped in a dark dungeon.\n";
    std::cout << "Your mission is to find a way out.\n";
}

void invalidInput() {
    std::cout << "Invalid input. Please try again.\n";
}

int main() {
    introduction();

    std::string choice;
    std::cout << "You see two paths ahead. Do you want to go 'left' or 'right'? ";
    std::cin >> choice;

    if (choice == "left") {
        std::cout << "You encounter a monster! Do you want to 'fight' or 'run'? ";
        std::cin >> choice;

        if (choice == "fight") {
            std::cout << "You bravely fight the monster and win! You find the exit and escape the dungeon. You win!\n";
        } else if (choice == "run") {
            std::cout << "You run away safely but get lost in the dungeon. You lose.\n";
        } else {
            invalidInput();
        }
    } else if (choice == "right") {
        std::cout << "You find a locked door. Do you want to 'pick' the lock or 'break' the door? ";
        std::cin >> choice;

        switch (choice[0]) {
        case 'p':
            std::cout << "You successfully pick the lock and escape the dungeon. You win!\n";
            break;
        case 'b':
            std::cout << "You break the door but trigger a trap. You lose.\n";
            break;
        default:
            invalidInput();
            break;
        }
    } else {
        invalidInput();
    }

    return 0;
}


