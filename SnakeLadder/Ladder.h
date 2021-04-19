//
// Created by Dhiraj Dwivedi on 18-04-2021.
//


class Ladder {
public:
    Ladder(int ladderId, int head, int tail);

    int getHead() const;

    void setHead(int head);

    int getTail() const;

    void setTail(int tail);

private:
    int ladderId;
    int head,tail;
};
