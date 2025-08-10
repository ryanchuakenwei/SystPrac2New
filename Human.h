#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>

class Human : public Player {
    std::string name;
    
    public: 
        Human() : name("Human") {}  // Add default constructor
        Human(const std::string& name);
        Move* makeMove() override;
        std::string getName() const override;
};
#endif