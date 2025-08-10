#include "Computer.h"
#include <cstdlib>
#include <ctime>
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Robot.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

Computer::Computer(const std::string& name) : name(name) {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}

std::string Computer::getName() const {
    return name;
}

Move* Computer::makeMove() {
    return new Rock();
}