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

Computer::Computer(const std::string& name) : name(name){
    std::srand(static_cast<unsigned<(std::time(nullptr)));
}

std::string Computer::getName() const {
    return name;
}

Move* Computer::makeMove() {
    int r = std::rand() % 8;
    switch (r) {
        case 0: return new Rock();
        case 1: return new Paper();
        case 2: return new Scissors();
        case 3: return new Robot();
        case 4: return new Monkey();
        case 5: return new Pirate();
        case 6: return new Ninja();
        case 7: return new Zombie();
    }
    return nullptr;
}