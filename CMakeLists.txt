cmake_minimum_required(VERSION 3.17)
project(Game_chapter_17)

set(CMAKE_CXX_STANDARD 20)

add_executable(Game_chapter_17 src/main.cpp src/Creature.cpp includes/Creature.h src/Player.cpp includes/Player.h src/Monster.cpp includes/Monster.h src/PlayGame.cpp includes/PlayGame.h)