//
// Created by Dhiraj Dwivedi on 18-04-2021.
//
using namespace std;

class Snake {
    int snakeId;
    int head,tail;
public:
    Snake(int snakeId, int head, int tail);

    int getHead() const;

    void setHead(int head);

    int getTail() const;

    void setTail(int tail);
};
