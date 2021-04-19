//
// Created by Dhiraj Dwivedi on 18-04-2021.
//

#include "Snake.h"
#include "Ladder.h"
#include <vector>
using namespace std;

class Grid {
public:
    Grid(int size, const vector<Snake> &snakes, const vector<Ladder> &ladders);

private:
    int size;
    vector<Snake>snakes;
    vector<Ladder>ladders;
public:
    int getSize() const;

    void setSize(int size);

    const vector<Snake> &getSnakes() const;

    void setSnakes(const vector<Snake> &snakes);

    const vector<Ladder> &getLadders() const;

    void setLadders(const vector<Ladder> &ladders);
};

