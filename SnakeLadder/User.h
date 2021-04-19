//
// Created by Dhiraj Dwivedi on 18-04-2021.
//
#include <string>
using namespace std;

class User {
    int userId;
    int pos;
    string name;
public:
    User(int userId, int pos, const string &name);

    int getUserId() const;

    void setUserId(int userId);

    int getPos() const;

    void setPos(int pos);

    const string &getName() const;

    void setName(const string &name);
};

