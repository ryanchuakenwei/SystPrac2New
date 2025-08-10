#include "Paper.h"

bool Paper::defeats(const Move& other) const{
    return (other.getName() == "Rock" || other.getName() == "Robot");
}