#include "Scissors.h"

bool Scissors::defeats(const Move& other) const{
    return (other.getName() == "Paper" || other.getName() == "Monkey");
}