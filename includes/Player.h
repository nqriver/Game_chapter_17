#ifndef GAME_CHAPTER_17_PLAYER_H
#define GAME_CHAPTER_17_PLAYER_H

#include "Creature.h"

class Player : public Creature {
private:
    int m_level{ 1 };
public:
    Player(const std::string &name);
    int getMLevel() const;
    void levelUp();
    bool hasWon() const;
};


#endif //GAME_CHAPTER_17_PLAYER_H
