#ifndef GAME_CHAPTER_17_CREATURE_H
#define GAME_CHAPTER_17_CREATURE_H


#include <string>

class Creature {
protected:
    std::string m_name {};
    char m_symbol{};
    int m_health{};
    int m_attack{};
    int m_gold{};
public:
    Creature(std::string name, char symbol, int health, int attack, int gold);
    const std::string &getName() const;
    char getSymbol() const;
    int getHealth() const;
    int getGold() const;
    int getAttack() const;
    void addGold(int);
    bool isDead() const;
    void reduceHealth(int);
};


#endif //GAME_CHAPTER_17_CREATURE_H
