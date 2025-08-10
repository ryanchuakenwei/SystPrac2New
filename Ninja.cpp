#include "Ninja.h"

bool Ninja::defeats(const Move& other) const{
    return (other.getName() == "Pirate" || other.getName() == "Zombie");
}