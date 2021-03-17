#ifndef GAME_CHAPTER_17_MONSTER_H
#define GAME_CHAPTER_17_MONSTER_H


#include <array>
#include <random>
#include "Creature.h"


int getRandomNumber(int min, int max);


class Monster : public Creature {
public:
    enum class Type{
        DRAGON,
        ORC,
        SLIME,
        MAX_TYPE
    };

private:
    static const Creature &getDefaultCreature(Type type){
        static std::array<Creature, static_cast<std::size_t>(Type::MAX_TYPE)> monsterData{
                {
                        {"dragon", 'D', 20, 4, 100},
                        {"orc", 'o', 4, 2, 25},
                        {"slime", 's', 1, 1, 10}
                }
        };
    return monsterData.at(static_cast<std::size_t>(type));
    }

public:
    explicit Monster(Type type);
    static Monster getRandomMonster();
};


#endif //GAME_CHAPTER_17_MONSTER_H
