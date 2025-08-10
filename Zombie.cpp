#include "Zombie.h"

bool Zombie::defeats(const Move& other) const{
    return (other.getName() == "Paper" || other.getName() == "Ninja");
}