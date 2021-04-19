//
// Created by Dhiraj Dwivedi on 18-04-2021.
//

#include "Grid.h"

Grid::Grid(int size, const vector<Snake> &snakes, const vector<Ladder> &ladders) : size(size), snakes(snakes),
                                                                                   ladders(ladders) {}

int Grid::getSize() const {
    return size;
}

void Grid::setSize(int size) {
    Grid::size = size;
}

const vector<Snake> &Grid::getSnakes() const {
    return snakes;
}

void Grid::setSnakes(const vector<Snake> &snakes) {
    Grid::snakes = snakes;
}

const vector<Ladder> &Grid::getLadders() const {
    return ladders;
}

void Grid::setLadders(const vector<Ladder> &ladders) {
    Grid::ladders = ladders;
}
