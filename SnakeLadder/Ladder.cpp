//
// Created by Dhiraj Dwivedi on 18-04-2021.
//

#include "Ladder.h"

Ladder::Ladder(int ladderId, int head, int tail) : ladderId(ladderId), head(head), tail(tail) {}

int Ladder::getHead() const {
    return head;
}

void Ladder::setHead(int head) {
    Ladder::head = head;
}

int Ladder::getTail() const {
    return tail;
}

void Ladder::setTail(int tail) {
    Ladder::tail = tail;
}

