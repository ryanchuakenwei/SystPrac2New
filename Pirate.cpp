#include "Pirate.h"

bool Pirate::defeats(const Move& other) const{
    return (other.getName() == "Rock" || other.getName() == "Robot");
}