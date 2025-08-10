#include "Monkey.h"

bool Monkey::defeats(const Move& other) const{
    return (other.getName() == "Paper" || other.getName() == "Pirate");
}