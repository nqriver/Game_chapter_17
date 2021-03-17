#ifndef GAME_CHAPTER_17_PLAYGAME_H
#define GAME_CHAPTER_17_PLAYGAME_H


#include "Monster.h"
#include "Player.h"

void playersAttack(Player &player, Monster &monster);
void monstersAttack(Player &player, Monster &monster);
void fight(Player &player);

#endif //GAME_CHAPTER_17_PLAYGAME_H
