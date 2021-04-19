//
// Created by Dhiraj Dwivedi on 18-04-2021.
//

#include "User.h"

User::User(int userId, int pos, const string &name) : userId(userId), pos(pos), name(name) {}

int User::getUserId() const {
    return userId;
}

void User::setUserId(int userId) {
    User::userId = userId;
}

int User::getPos() const {
    return pos;
}

void User::setPos(int pos) {
    User::pos = pos;
}

const string &User::getName() const {
    return name;
}

void User::setName(const string &name) {
    User::name = name;
}
