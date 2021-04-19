cmake_minimum_required(VERSION 3.19)
project(SnakeLadder)

set(CMAKE_CXX_STANDARD 14)

add_executable(SnakeLadder main.cpp Snake.cpp Snake.h Ladder.cpp Ladder.h Grid.cpp Grid.h Dice.cpp Dice.h User.cpp User.h)