#include "Rock.h"

bool Robot::defeats(const Move& other) const{
    return (other.getName() == "Scissors" || other.getName() == "Zombie");
}