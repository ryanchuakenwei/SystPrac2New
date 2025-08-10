#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"

class Scissors : public Move{
    public:
    std::string getName() const override {
        return "Scissors";
    }
    bool defeats(const Move& other) const override;
};
#endif