#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"

class Monkey : public Move{
    public:
    std::string getName() const override {
        return "Monkey";
    }
    bool defeats(const Move& other) const override;
};
#endif