//
// Created by Dhiraj Dwivedi on 18-04-2021.
//

#include "Snake.h"

Snake::Snake(int snakeId, int head, int tail) : snakeId(snakeId), head(head), tail(tail) {}

int Snake::getHead() const {
    return head;
}

void Snake::setHead(int head) {
    Snake::head = head;
}

int Snake::getTail() const {
    return tail;
}

void Snake::setTail(int tail) {
    Snake::tail = tail;
}
