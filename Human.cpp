#include "Human.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Robot.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
#include <iostream>

Human::Human(const std::string& name) : name(name) {}

std::string Human::getName() const {
    return name;
}

Move* Human::makeMove() {
    std::string choice;
    std::cout << "Enter move: ";
    std::cin >> choice;

    if (choice == "Rock")
        return new Rock();
    if (choice == "Paper")
        return new Paper();
    if (choice == "Scissors")
        return new Scissors();
    if (choice == "Robot")
        return new Robot();
    if (choice == "Monkey")
        return new Monkey();
    if (choice == "Pirate")
        return new Pirate();
    if (choice == "Ninja")
        return new Ninja();
    if (choice == "Zombie")
        return new Zombie();
    return nullptr;
}