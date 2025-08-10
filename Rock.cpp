#include "Rock.h"

bool Rock::defeats(const Move& other) const{
    return (other.getName() == "Scissors" || other.getName() == "Monkey");
}