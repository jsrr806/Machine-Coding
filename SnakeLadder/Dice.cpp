//
// Created by Dhiraj Dwivedi on 18-04-2021.
//

#include "Dice.h"

int Dice::getRange() const {
    return range;
}

void Dice::setRange(int range) {
    Dice::range = range;
}

Dice::Dice(int range) : range(range) {}
